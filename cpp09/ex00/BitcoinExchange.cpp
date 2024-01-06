/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:26:09 by jsabound          #+#    #+#             */
/*   Updated: 2023/12/25 18:23:30 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(std::string fileName)
{
	this->fileName = fileName;
	parsingData();
	parsingInput();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& src)
{
	*this = src;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& src)
{
	if (this != &src)
	{
		fileName = src.fileName;
		wallet = src.wallet;
		DataPrice = src.DataPrice;
	}
	return *this;
}

void BitcoinExchange::parsingData()
{
	std::ifstream data("data.csv");
	std::string line;

	if (!data.is_open())
		throw std::invalid_argument("Error : can't open data.csv");
	std::getline(data, line);
	if (line != "date,exchange_rate")
		throw std::invalid_argument("Error : Wrong file format of csv");
	while(std::getline(data, line))
		!checkDataline(line, 1) ? true : throw std::invalid_argument("Error : Wrong file format of csv");
	data.close();
}

int BitcoinExchange::checkDataline(const std::string& line, int check)
{
	std::string data[4];
	int min[3] = {2009, 1, 1};
	int max[3] = {2023, 12, 31};
	int value_data[4];

	std::stringstream ss(line);

	std::getline(ss, data[YEAR], '-');
	std::getline(ss, data[MONTH], '-');
	if (check)
		std::getline(ss, data[DAY], ',');
	else 
		std::getline(ss, data[DAY], ' ');

	for (int i = 0; i < 3; i++)
		value_data[i] = std::atol(data[i].c_str());

	if (data[YEAR].size() != 4 || data[MONTH].size() != 2 || data[DAY].size() != 2)
		return 1;
	if (value_data[MONTH] < 8)
		max[2] = (value_data[MONTH] % 2 == 0 ? 30 : 31);
	else if (value_data[MONTH] > 8)
		max[1] = (value_data[MONTH] % 2 ? 30 : 31);
	if (value_data[MONTH] == 2)
		max[1] = (value_data[YEAR] % 4) ? 28 : 29;
	for (int i = 0; i < 3; i++)
	{
		if (data[i].empty() || data[i].find_first_not_of("0123456789") != std::string::npos || value_data[i] < min[i] || value_data[i] > max[i])
			return 1;
	}
	return processLine(ss, line, data, check);
}

int BitcoinExchange::processLine(std::stringstream &ss, std::string const &line, std::string data[4], bool check)
{
	if (check)
	{
		ss >> data[PRICE];
		for (int i = 0; data[PRICE][i]; i++)
		{
			if (data[PRICE][i] == '.' && !std::isdigit(data[PRICE][i + 1]))
				return 4;
		}
		size_t n = std::count(data[PRICE].begin(), data[PRICE].end(), '.');
		if (n > 1)
			return 1;
		if (ss.fail() || !ss.eof() || data[PRICE].empty() || data[PRICE].find_first_not_of("0123456789.") != std::string::npos || std::strtod(data[PRICE].c_str(), NULL) < 0)
			return 1;
		DataPrice.insert(std::pair<std::string, double>(line.substr(0, 10), std::strtod(data[PRICE].c_str(), NULL)));
	}
	else
	{
		ss >> data[PRICE];
		if (data[PRICE].empty() || data[PRICE].find_first_not_of("|") != std::string::npos)
			return 4;
		ss >> data[PRICE];
		for(int i = 0; data[PRICE][i]; i++)
		{
			if (data[PRICE][i] == '.' && !std::isdigit(data[PRICE][i + 1]))
				return 4;
		}
		size_t n = std::count(data[PRICE].begin(), data[PRICE].end(), '.');
		if (n > 1)
			return 4;
		if (std::strtod(data[PRICE].c_str(), NULL) > INT_MAX || std::strtod(data[PRICE].c_str(), NULL) > 1000)
			return 3;
		if (std::strtod(data[PRICE].c_str(), NULL) < 0)
			return 2;
		if (ss.fail() || !ss.eof() || data[PRICE].empty() || data[PRICE].find_first_not_of("0123456789.") != std::string::npos)
			return 4;
		wallet = std::strtod(data[PRICE].c_str(), NULL);
	}
	return 0;
}

void BitcoinExchange::parsingInput()
{
	std::ifstream input(this->fileName.c_str());
	std::string line;
	
	if (!input.is_open())
		throw std::invalid_argument("Error : can't open Input file");
	std::getline(input, line);
	if (line != "date | value")
		throw std::invalid_argument("Error : Wrong file format of input");
	while(std::getline(input, line))
		printResult(line, checkDataline(line, 0));
	input.close();
}

void BitcoinExchange::printResult(std::string const &line, int error)
{
	int check = DataPrice.count(line.substr(0, 10));

	if (!check && !error)
	{
		std::map<std::string, double>::iterator it = DataPrice.begin();
		std::string temp = it->first;
		for(; it != DataPrice.end(); it++)
		{
			if (it->first > temp && it->first < line.substr(0, 10))
				temp = it->first; 
		}
		std::cout << line.substr(0, 10) << " => " << wallet << " = " << DataPrice[temp] * wallet << std::endl;
	}
	else
	{
		if (error == 0)
			std::cout << line.substr(0, 10) << " => " << wallet << " = " << DataPrice[line.substr(0, 10)] * wallet << std::endl;
		else if (error == 1)
			std::cout << "Error : bad input => " << line.substr(0, 10) << std::endl;
		else if (error == 2)
			std::cout << "Error: not a positive number." << std::endl;
		else if (error == 3)
			std::cout << "Error: too large a number." << std::endl;
		else if (error == 4)
			std::cout << "Error: bad input => " << line.substr(0, 10) << std::endl;
	}

}


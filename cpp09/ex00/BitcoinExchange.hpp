/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:26:11 by jsabound          #+#    #+#             */
/*   Updated: 2023/12/15 18:42:11 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <climits>

#define YEAR 0
#define MONTH 1
#define DAY 2
#define PRICE 3

class BitcoinExchange
{
	public :
	
	BitcoinExchange();
	BitcoinExchange(std::string fileName);
	BitcoinExchange(const BitcoinExchange& src);
	BitcoinExchange& operator=(const BitcoinExchange& src);
	~BitcoinExchange();
	void parsingData();
	void parsingInput();
	int checkDataline(const std::string& line, int check);
	int processLine(std::stringstream &ss, std::string const &line, std::string data[4], bool check);
	void printResult(std::string const &line, int display);

	private :
	
	std::string fileName;
	double wallet;
	std::map<std::string, double> DataPrice;
};

#endif
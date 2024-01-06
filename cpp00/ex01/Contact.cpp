/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 19:05:34 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/04 15:13:18 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	first_name = "";
	last_name = "";
	nick_name = "";
	phone_number = "";
	darkest_secret = "";
}

Contact::~Contact()
{
}

void Contact::setFirst_Name()
{
	std::string str = "";
	while (str.empty())
	{
		std::cout << "What's the first name of the contact ?" << std::endl;
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit(0);
	}
	this->first_name = str;
}

void Contact::setLast_Name()
{
	std::string str;
	while (str.empty())
	{
		std::cout << "What's the last name of the contact ?" << std::endl;
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit(0);
	}
	this->last_name = str;
}

void Contact::setNick_Name()
{
	std::string str;
	while (str.empty())
	{
		std::cout << "What's the nick name of the contact ?" << std::endl;
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit(0);
	}
	this->nick_name = str;
}

void Contact::setPhone_Number()
{
	std::string str;
	while (str.empty())
	{
		std::cout << "What's the phone number of the contact ?" << std::endl;
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit(0);
	}
	this->phone_number = str;
}

void Contact::setDarkest_Secret()
{
	std::string str;
	while (str.empty())
	{
		std::cout << "What's the darkest secret of the contact ?" << std::endl;
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit(0);
	}
	this->darkest_secret = str;
}

void Contact::display_contact()
{
	int i(0);
	std::cout << "_____________ PHONEBOOK ______________" << std::endl;
	std::cout << "INDEX|FIRST_NAME|LAST_NAME | NICKNAME |" << std::endl;
	std::cout << "_____|__________|__________|__________|" << std::endl;
	while (i < 8)
	{
		std::cout << std::right << std::setw(4) << i + 1 << ".|";
		display_contact2(this[i].first_name, 0);
		display_contact2(this[i].last_name, 0);
		display_contact2(this[i].nick_name, 0);
		std::cout << std::endl;
		i++;
	}
}

void Contact::display_contact2(std::string str, int j)
{
	if (str.length() > 10)
		std::cout << std::right << std::setw(8) << str.substr(0, 9) << ".";
	else
		std::cout << std::right << std::setw(10) << str.substr(0, 10);
	if (j == 0)
		std::cout << "|";
}

int Contact::display_informations()
{
	std::cout << "--- First_name ---" << std::endl
				<< this->first_name << std::endl;
	std::cout << "--- Last_name ---" << std::endl
				<< this->last_name << std::endl;
	std::cout << "--- Nickname ---" << std::endl
				<< this->nick_name << std::endl;
	std::cout << "--- Phone_number ---" << std::endl
				<< this->phone_number << std::endl;
	std::cout << "--- Secret ---" << std::endl
				<< this->darkest_secret << std::endl;
	return (0);
}
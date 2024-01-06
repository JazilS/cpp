/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:21:35 by jsabound          #+#    #+#             */
/*   Updated: 2023/09/27 18:29:29 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

void	display_menu(void)
{
	std::cout << "________________ PHONEBOOK _________________" << std::endl;
	std::cout << "ADD 	: To add a contact" << std::endl;
	std::cout << "SEARCH 	: To search a contact" << std::endl;
	std::cout << "EXIT 	: To leave the program" << std::endl << std::endl;
}

int main(int ac, char **av)
{
	(void)av;
	Phonebook book;
	std::string str;
	int i(0);
	
	if (ac == 1)
	{
		while (str.compare("EXIT"))
		{
			std::cout << "CHOOSE A COMMAND : SEARCH, ADD, EXIT" << std::endl;
			std::getline(std::cin, str);
			if (std::cin.eof())
				exit(0);
			if (!str.compare("ADD"))
			{
				if (i == 8)
					i = 0;
				book.add(i);
				i++;
			}
			else if (!str.compare("SEARCH"))
				book.search();
		}
	}
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:21:38 by jsabound          #+#    #+#             */
/*   Updated: 2023/09/27 18:53:58 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	
}

Phonebook::~Phonebook()
{
	
}
void Phonebook::add(int i)
{
	list[i].setFirst_Name();
	list[i].setLast_Name();
	list[i].setNick_Name();
	list[i].setPhone_Number();
	list[i].setDarkest_Secret();
	display_menu();
}

void Phonebook::search()
{
	list->display_contact();
	choose_contact();
}

void Phonebook::choose_contact()
{
	int			check(1);
	std::string str("");

	while (check)
	{	
		std::cout << "Veuillez choisir un contact entre 1 et 8" << std::endl;
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit(0);
		if (!str.compare("1"))
			check = list[0].display_informations();
		else if (!str.compare("2"))
			check = list[1].display_informations();
		else if (!str.compare("3"))
			check = list[2].display_informations();
		else if (!str.compare("4"))
			check = list[3].display_informations();
		else if (!str.compare("5"))
			check = list[4].display_informations();
		else if (!str.compare("6"))
			check = list[5].display_informations();
		else if (!str.compare("7"))
			check = list[6].display_informations();
		else if (!str.compare("8"))
			check = list[7].display_informations();
		else
			std::cout << "Erreur ! ";
	}
}
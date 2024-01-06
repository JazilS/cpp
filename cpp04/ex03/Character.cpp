/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:26:19 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/11 16:26:23 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	for (int i = 0; i < 4; i++)
		tab[i] = NULL;
	for (int i = 0; i < 20; i++)
		temp[i] = NULL;
	name = "";
}

Character::Character(std::string name)
{
	for (int i = 0; i < 4; i++)
		tab[i] = NULL;
	for (int i = 0; i < 20; i++)
		temp[i] = NULL;
	this->name = name;
}

Character::Character(const Character &copie) : name(copie.name)
{
	for (int i = 0; i < 4; i++)
	{
		if (copie.tab[i])
			tab[i] = copie.tab[i]->clone();
		else
			tab[i] = NULL;
	}
	for (int i = 0; i < 20; i++)
	{
		if (copie.temp[i])
			temp[i] = copie.temp[i]->clone();
		else
			temp[i] = NULL;
	}
}

Character &Character::operator=(const Character &copie)
{

	if (this != &copie)
	{
		name = copie.name;
		for (int i = 0; i < 4; i++)
		{
			delete	tab[i];
			if (copie.tab[i])
				tab[i] = copie.tab[i]->clone();
			else
				tab[i] = NULL;
		}
		for (int i = 0; i < 20; i++)
		{
			delete	temp[i];
			if (copie.temp[i])
				temp[i] = copie.temp[i]->clone();
			else
				temp[i] = NULL;
		}
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete tab[i];
	for (int i = 0; i < 20; i++)
	{
		if (temp[i])
			delete temp[i];
	}
}

std::string const &Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (tab[i] == NULL)
		{
			tab[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	for (int i = 0; i < 20; i++)
	{
		if (temp[i] == NULL)
		{
			temp[i] = tab[idx];
			break ;
		}
		if (i == 20)
			std::cerr << "Pas possible de unequip plus 20 fois." << std::endl;
	}
	tab[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (tab[idx])
		tab[idx]->use(target);
}

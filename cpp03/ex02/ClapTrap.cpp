/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:49:02 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/08 17:53:58 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Constructor Called" << std::endl;;
}

ClapTrap::ClapTrap(const std::string& name)
{
	std::cout << "ClapTrap " << name << " Created !" << std::endl;
	this->name = name; 
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " Destroyed !" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copie)
{
		*this = copie;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copie)
{
	if (this != &copie)
	{
		this->name = copie.name;
		this->hit_points = copie.hit_points;
		this->energy_points = copie.energy_points;
		this->attack_damage = copie.attack_damage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energy_points == 0 || this->hit_points == 0)
	{
		std::cout << "ClapTrap " << name << " has no energy_points!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << name << " attacks " << target << " , causing " << this->attack_damage << " points of damage !" << std::endl;
	this->energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points == 0)
		return ;
	this->hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_points == 0 || this->hit_points == 0)
	{
		std::cout << "ClapTrap " << name << " has no energy_points!" << std::endl;
		return;
	}
	this->hit_points += amount;
	if (hit_points > 10)
		this->hit_points = 10;
	this->energy_points--;
}

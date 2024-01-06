/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:21:17 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/08 17:48:49 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " Created !" << std::endl;
	ClapTrap::hit_points = 100;
	ClapTrap::energy_points = 50;
	ClapTrap::attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " Destroyed !" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copie)
{
		*this = copie;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &copie)
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

void ScavTrap::attack(const std::string& target)
{
	if (this->energy_points == 0 || this->hit_points == 0)
	{
		std::cout << "ScavTrap " << name << " has no energy_points!" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << name << " attacks " << target << " , causing " << this->attack_damage << " points of damage !" << std::endl;
	this->energy_points--;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points == 0)
		return ;
	this->hit_points -= amount;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (this->energy_points == 0 || this->hit_points == 0)
	{
		std::cout << "ScavTrap " << name << " has no energy_points!" << std::endl;
		return;
	}
	this->hit_points += amount;
	if (hit_points > 10)
		this->hit_points = 10;
	this->energy_points--;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}
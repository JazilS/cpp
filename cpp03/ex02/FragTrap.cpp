/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:14:08 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/08 17:50:31 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "FragTrap " << name << " Created !" << std::endl;
	ClapTrap::hit_points = 100;
	ClapTrap::energy_points = 100;
	ClapTrap::attack_damage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " Destroyed !" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copie) : ClapTrap(copie)
{
		*this = copie;
}

FragTrap& FragTrap::operator=(const FragTrap &copie)
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

void FragTrap::attack(const std::string& target)
{
	if (this->energy_points == 0 || this->hit_points == 0)
	{
		std::cout << "FragTrap " << name << " has no energy_points!" << std::endl;
		return;
	}
	std::cout << "FragTrap " << name << " attacks " << target << " , causing " << this->attack_damage << " points of damage !" << std::endl;
	this->energy_points--;
}

// void FragTrap::takeDamage(unsigned int amount)
// {
// 	if (this->hit_points == 0)
// 		return ;
// 	this->hit_points -= amount;
// }

// void FragTrap::beRepaired(unsigned int amount)
// {
// 	if (this->energy_points == 0 || this->hit_points == 0)
// 		return ;
// 	this->hit_points += amount;
// 	if (hit_points > 10)
// 		this->hit_points = 10;
// 	this->energy_points--;
// }

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " ask a high five!" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:21:58 by jsabound          #+#    #+#             */
/*   Updated: 2023/09/28 20:01:12 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : name(name), weapon(NULL)
{
	
}

HumanB::~HumanB()
{
	
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack()
{
	if (!this->weapon)
	{
		std::cout << "No weapon !! " << std::endl;
		return ;
	}
	std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
}
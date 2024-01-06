/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:57:07 by jsabound          #+#    #+#             */
/*   Updated: 2023/09/28 17:59:28 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	name = "";
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << name << " Destroyed !" << std::endl;
}

void Zombie::add_name(std::string name)
{
	this->name = name;
}

void Zombie::anounce(void)
{
	std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:45:10 by jsabound          #+#    #+#             */
/*   Updated: 2023/09/28 19:05:28 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type)
{
	this->type = type;
}

Weapon::~Weapon()
{
	
}

const std::string &Weapon::getType() const 
{
    return type;
}

void Weapon::setType(const std::string &type)
{
	this->type = type;
}
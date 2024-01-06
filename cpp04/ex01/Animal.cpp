/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:51:24 by jsabound          #+#    #+#             */
/*   Updated: 2023/10/22 17:49:42 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default Constructor Called for an Animal" << std::endl;;
	this->type = "";
}

Animal::Animal(const std::string &name)
{
	std::cout << "Surcharged Constructor Called for an Animal" << std::endl;;
	this->type = name;
}

Animal::~Animal()
{
	std::cout << "Animal " << type << " Destroyed !" << std::endl;
}

Animal::Animal(const Animal &copie)
{
	std::cout << "Copie Constructor Called for an Animal" << std::endl;;
		*this = copie;
}

Animal& Animal::operator=(const Animal &copie)
{
	if (this != &copie)
	{
		this->type = copie.type;
	}
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << type << " is making noise" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}
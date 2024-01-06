/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:51:24 by jsabound          #+#    #+#             */
/*   Updated: 2023/10/21 15:10:30 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default WrongAnimal Constructor Called" << std::endl;;
	this->type = "";
}

WrongAnimal::WrongAnimal(const std::string &name)
{
	std::cout << "Surcharged WrongAnimal Constructor Called" << std::endl;;
	this->type = name;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destroyed !" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copie)
{
	std::cout << "Copie Constructor Called" << std::endl;;
		*this = copie;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &copie)
{
	if (this != &copie)
	{
		this->type = copie.type;
	}
	return (*this);
}

void WrongAnimal::makeSound() const
{
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}
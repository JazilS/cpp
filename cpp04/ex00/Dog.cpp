/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:51:47 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/11 16:33:46 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Constructor Called" << std::endl;;
	this->type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog Destroyed !" << std::endl;
}

Dog::Dog(const std::string &name)
{
	std::cout << "Surcharged Dog Constructor Called" << std::endl;;
	this->type = name;
}

Dog::Dog(const Dog &copie)
{
		*this = copie;
}

Dog& Dog::operator=(const Dog &copie)
{
	if (this != &copie)
	{
		this->type = copie.type;
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Waf Waf !" << std::endl;
}
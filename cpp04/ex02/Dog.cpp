/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:51:47 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/11 19:12:29 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default Constructor Called for a Dog" << std::endl;;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::~Dog()
{
	delete brain ;
	std::cout << "Dog Destroyed !" << std::endl;
}

Dog::Dog(const std::string &name)
{
	std::cout << "Surcharged Constructor Called for a Dog" << std::endl;;
	this->type = name;
}

Dog::Dog(const Dog &copie)
{
	brain = NULL;
	*this = copie;
}

Dog& Dog::operator=(const Dog &copie)
{
	if (this != &copie)
	{
		this->type = copie.type;
		if (this->brain != NULL)
			delete(this->brain);
		this->brain = new Brain(*copie.brain);
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Waf Waf !" << std::endl;
}
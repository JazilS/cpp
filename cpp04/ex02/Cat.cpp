/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:51:40 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/11 19:13:13 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default Constructor Called for a Cat" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat()
{
	delete brain ;
	std::cout << "Cat Destroyed !" << std::endl;
}

Cat::Cat(const std::string &name)
{
	std::cout << "Surcharged Constructor Called for a Cat" << std::endl;
	this->type = name;
	delete this->brain;
}

Cat::Cat(const Cat &copie)
{
	brain = NULL;
	*this = copie;
}

Cat& Cat::operator=(const Cat &copie)
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

void Cat::makeSound() const
{
	std::cout << "Meow Meow !" << std::endl;
}
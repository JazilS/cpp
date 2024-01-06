/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:51:40 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/11 16:33:54 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Constructor Called" << std::endl;
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat Destroyed !" << std::endl;
}

Cat::Cat(const std::string &name)
{
	std::cout << "Surcharged Cat Constructor Called" << std::endl;
	this->type = name;
}

Cat::Cat(const Cat &copie)
{
		*this = copie;
}

Cat& Cat::operator=(const Cat &copie)
{
	if (this != &copie)
	{
		this->type = copie.type;
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow !" << std::endl;
}
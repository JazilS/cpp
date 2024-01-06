/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:51:40 by jsabound          #+#    #+#             */
/*   Updated: 2023/10/21 15:13:12 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Default Constructor Called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destroyed !" << std::endl;
}

WrongCat::WrongCat(const std::string &name)
{
	std::cout << "Surcharged Constructor Called" << std::endl;
	this->type = name;
}

WrongCat::WrongCat(const WrongCat &copie)
{
		*this = copie;
}

WrongCat& WrongCat::operator=(const WrongCat &copie)
{
	if (this != &copie)
	{
		this->type = copie.type;
	}
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Meow Meow !" << std::endl;
}
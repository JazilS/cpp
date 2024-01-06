/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:04:54 by jsabound          #+#    #+#             */
/*   Updated: 2023/10/09 18:19:32 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	nb_v = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copie)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copie;
}

Fixed& Fixed::operator=(const Fixed &copie)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &copie)
		return (*this);
	this->nb_v = copie.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->nb_v);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->nb_v = raw;
}
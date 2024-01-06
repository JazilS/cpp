/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:04:54 by jsabound          #+#    #+#             */
/*   Updated: 2023/10/09 19:37:02 by jsabound         ###   ########.fr       */
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

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->nb_v = nb << this->nb_const;
}

Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called" << std::endl;
	this->nb_v = (float)roundf(nb * (1 << this->nb_const));
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
	return (this->nb_v);
}

void Fixed::setRawBits(int const raw)
{
	this->nb_v = raw;
}

float Fixed::toFloat(void)const
{
	return ((float)this->nb_v / (1 << this->nb_const));
}

int Fixed::toInt(void)const
{
	return (this->nb_v >> this->nb_const);
}

std::ostream& operator<<(std::ostream &os, const Fixed &obj)
{
	os << obj.toFloat();
	return (os);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:04:54 by jsabound          #+#    #+#             */
/*   Updated: 2023/10/18 15:20:19 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	nb_v = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &copie)
{
	*this = copie;
}

Fixed::Fixed(const int nb)
{
	this->nb_v = nb << this->nb_const;
}

Fixed::Fixed(const float nb)
{
	this->nb_v = roundf(nb * (1 << this->nb_const));
}

Fixed& Fixed::operator=(const Fixed &copie)
{
	if (this != &copie)
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

bool Fixed::operator>(const Fixed &obj)const
{
	return this->toFloat() > obj.toFloat();
}

bool Fixed::operator<(const Fixed &obj)const
{
    return this->toFloat() < obj.toFloat();
}

bool Fixed::operator>=(const Fixed &obj)const  
{
	return this->toFloat() >= obj.toFloat();
}

bool Fixed::operator<=(const Fixed &obj)const  
{
	return this->toFloat() <= obj.toFloat();
}

bool Fixed::operator==(const Fixed &obj)const  
{
	return this->getRawBits() == obj.getRawBits();
}

bool Fixed::operator!=(const Fixed &obj)const  
{
	return !(*this == obj);
}

Fixed Fixed::operator+(const Fixed &obj)  
{
	return Fixed(this->toFloat() + obj.toFloat());
}

Fixed Fixed::operator-(const Fixed &obj)  
{
	return Fixed(this->toFloat() - obj.toFloat());
}

Fixed Fixed::operator*(const Fixed &other)  
{
	this->nb_v = (this->toFloat() * other.toFloat()) * (1 << nb_const);
	return (*this);
}

Fixed Fixed::operator/(const Fixed &obj)  
{
	if (obj.toFloat() == 0) {
		std::cerr << "Division by zero!" << std::endl;
		return Fixed(0);
	}
	return Fixed(this->toFloat() / obj.toFloat());
}

Fixed &Fixed::operator++()
{
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}

Fixed Fixed::operator++(int) 
{
	Fixed temp(*this);
	++(*this);
	return temp;
}

Fixed &Fixed::operator--() 
{
	this->setRawBits(this->getRawBits() - 1);
	return *this;
}

Fixed Fixed::operator--(int) 
{
	Fixed temp(*this);
	--(*this);
	return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) 
{
	return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) 
{
	return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	return (a.getRawBits() > b.getRawBits()) ? a : b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) 
{
	return (a.getRawBits() > b.getRawBits()) ? a : b;
}
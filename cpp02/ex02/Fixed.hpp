/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:04:56 by jsabound          #+#    #+#             */
/*   Updated: 2023/10/18 15:16:59 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <cstdlib>
# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string.h>
# include <string>

class Fixed
{
  public:
	Fixed();
	Fixed(const Fixed &copie);
	Fixed(const int nb);
	Fixed(const float nb);
	Fixed &operator=(const Fixed &copie);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);
	bool operator>(const Fixed &obj)const; 
	bool operator<(const Fixed &obj)const;
	bool operator>=(const Fixed &obj)const;
	bool operator<=(const Fixed &obj)const;
	bool operator==(const Fixed &obj)const;
	bool operator!=(const Fixed &obj)const;
	Fixed operator+(const Fixed &obj);
	Fixed operator-(const Fixed &obj);
	Fixed operator*(const Fixed &obj);
	Fixed operator/(const Fixed &obj);
	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);

  private:
	int nb_v;
	const static int nb_const = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &obj);

#endif
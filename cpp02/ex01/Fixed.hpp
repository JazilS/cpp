/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:04:56 by jsabound          #+#    #+#             */
/*   Updated: 2023/10/18 14:59:39 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>
# include <cstdlib>
# include <fstream>
# include <string.h>
# include <cmath>

class Fixed
{
	public :
	
	Fixed();
	Fixed(const Fixed &copie);
	Fixed(const int nb);
	Fixed(const float nb);
	Fixed &operator=(const Fixed &copie);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void)const;
	int toInt(void)const;
	
	private :

	int nb_v;
	const static int nb_const = 8;
};
std::ostream& operator<<(std::ostream &os, const Fixed &obj);

#endif
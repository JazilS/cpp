/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:04:56 by jsabound          #+#    #+#             */
/*   Updated: 2023/10/09 18:11:33 by jsabound         ###   ########.fr       */
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

class Fixed
{
	public :
	
	Fixed();
	Fixed(const Fixed &copie);
	Fixed &operator=(const Fixed &copie);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	
	private :

	int nb_v;
	const static int nb_const = 8;
};

#endif
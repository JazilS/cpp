/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:40:11 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/07 21:06:19 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// int main( void ) {
// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << Fixed::max( a, b ) << std::endl;
// 	return 0;
// }
int main (void)
{
	
// My main //
	 Fixed a(5.05f);
    Fixed b(2.5f);
    Fixed c;

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    c = a + b;
    std::cout << "c = a + b: " << c << std::endl;

    c = a - b;
    std::cout << "c = a - b: " << c << std::endl;

    c = a * b;
    std::cout << "c = a * b: " << c << std::endl;

    c = a / b;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
    std::cout << "c = a / b: " << c << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:20:45 by jsabound          #+#    #+#             */
/*   Updated: 2023/12/12 16:42:06 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
	*this = src;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &)
{
	return (*this);
}

bool ScalarConverter::isChar(const std::string &input)
{
	return (input.length() == 1 && std::isprint(input[0]));
}

bool ScalarConverter::isInt(const std::string &input)
{
	char *endptr = NULL;

	std::strtol(input.c_str(), &endptr, 10);
	return (endptr == &input[0] + input.length());
}

bool ScalarConverter::isFloat(const std::string &input)
{
	char *endptr = NULL;

	std::strtof(input.c_str(), &endptr);
	return (*endptr == 'f' && (endptr == &input[0] + input.length()) + 1);
}

bool ScalarConverter::isDouble(const std::string &input)
{
	char *endptr = NULL;

	std::strtod(input.c_str(), &endptr);
	return (endptr == &input[0] + input.length());
};

void ScalarConverter::convert(const std::string &input)
{
	if (isChar(input))
		printChar(input[0]);
	else if (isInt(input))
		printInt(std::strtod(input.c_str(), NULL));
	else if (isDouble(input))
		printDouble(std::strtod(input.c_str(), NULL));
	else if (isFloat(input))
		printFloat(std::strtof(input.c_str(), NULL));
	else
		std::cout << "Unknow type." << std::endl;
}

void ScalarConverter::printChar(char c)
{
	if (std::isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void ScalarConverter::printInt(double n)
{
	char c = static_cast<char>(n);
	if (n < CHAR_MIN || n > CHAR_MAX || n < static_cast<int>(INT_MIN) || n > static_cast<int>(INT_MAX) )
    	std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(c))
    	std::cout << "char: Non displayable" << std::endl;
	else
    	std::cout << "char: '" << c << "'" << std::endl;

	if (n < INT_MIN || n > INT_MAX || std::isnan(n) || std::isinf(n))
		std::cout << "int: impossible" << std::endl;
	else 
		std::cout << "int: " << static_cast<int>(n) << std::endl;
	
	if (n - static_cast<int>(n) == 0)
		std::cout << "float: " << n << ".0" << "f" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(n) << "f" << std::endl;
	
	if (n - static_cast<int>(n) == 0)
		std::cout << "double: " << n << ".0" << std::endl;
	else
		std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(n) << std::endl;
}

void ScalarConverter::printDouble(double d)
{
	char c = static_cast<char>(static_cast<int>(d) % 128);
	if (d < CHAR_MIN || d > CHAR_MAX || d < INT_MIN || d > INT_MAX )
    	std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(c))
    	std::cout << "char: impossible" << std::endl;
	else
	{
    	std::cout << "char: '" << c << "'" << std::endl;
	}
	
	if (d < INT_MIN || d > INT_MAX || std::isnan(d) || std::isinf(d))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	if (d - static_cast<int>(d) == 0)
		std::cout << "double: " << d << ".0" << std::endl;
	else
		std::cout << "double: " << d << std::endl;

}

void ScalarConverter::printFloat(float f)
{
	char c = static_cast<char>(f);
	if (f < CHAR_MIN || f > CHAR_MAX  || std::isnan(f) || std::isinf(f))
    	std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(c))
    	std::cout << "char: Non displayable" << std::endl;
	else
    	std::cout << "char: '" << c << "'" << std::endl;
	

	if (f < static_cast<float>(INT_MIN) || f > static_cast<float>(INT_MAX) || std::isnan(f) || std::isinf(f))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	if (f - static_cast<int>(f) == 0)
		std::cout << "float: " << f << ".0" << "f"<< std::endl;
	else
		std::cout << "float: " << f << "f" << std::endl;
	if (f - static_cast<int>(f) == 0)
		std::cout << "double: " << f << ".0" << std::endl;
	else
		std::cout << "double: " << f << std::endl;
}
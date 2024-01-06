/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:20:47 by jsabound          #+#    #+#             */
/*   Updated: 2023/12/04 18:03:57 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER
# define SCALARCONVERTER

# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>
# include <limits.h>
# include <limits>
# include <sstream>
# include <string>

class ScalarConverter
{
  public:
	static bool isChar(const std::string &input);
	static bool isInt(const std::string &input);
	static bool isFloat(const std::string &input);
	static bool isDouble(const std::string &input);

	static void convert(const std::string &input);
	static void printChar(char c);
	static void printInt(double n);
	static void printDouble(double d);
	static void printFloat(float f);

  private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &);
	ScalarConverter &operator=(const ScalarConverter &src);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:20:39 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/21 18:55:07 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: " << argv[0] << " <literal>" << std::endl;
		return (1);
	}

	ScalarConverter::convert(argv[1]);

	return (0);
}
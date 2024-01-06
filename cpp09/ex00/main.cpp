/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 19:30:29 by jsabound          #+#    #+#             */
/*   Updated: 2023/12/14 18:16:29 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage : ./bitcoin [file_name]" << std::endl;
		return (0);
	}
	try
	{
		BitcoinExchange exchange(argv[1]);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
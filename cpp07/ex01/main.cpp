/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 20:16:53 by jsabound          #+#    #+#             */
/*   Updated: 2023/12/11 19:03:50 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	std::string str_array[] = {"Hello", "World", "C++", "Templates"};
	int abcd[] = {0, 1, 2, 3};
	char str[] = {'a', 'b', 'c', 'd'};
	double arrayo[] = {2.3, 1.2, 9.3, 7.2};
	iter(str_array, 4, printElement<std::string>);
	
	std::cout << std::endl;
	iter(abcd, 3, printElement<int>);
	std::cout << std::endl;
	iter(str, 5, printElement<char>);
	std::cout << std::endl;
	iter(arrayo, 1, printElement<double>);
	std::cout << std::endl;

	return (0);
}
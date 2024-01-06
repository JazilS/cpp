/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:24:27 by jsabound          #+#    #+#             */
/*   Updated: 2023/12/15 18:24:28 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char* argv[]) 
{
    if (argc < 2)
	{
		std::cout << "Usage: ./PmergeMe <positive integer sequence as argument> " << std::endl;
		return 1;
	}
	try 
    {
		PmergeMe pmergeme(argc, argv);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
    return 0;
}

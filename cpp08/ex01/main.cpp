/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:59:51 by jsabound          #+#    #+#             */
/*   Updated: 2023/12/13 16:47:27 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main ( void )
{
	try
	{
		std::cout << std::endl << "******* TEST 1 *******" << std::endl;
		Span array(4);
		array.addNumber(42);
		array.addNumber(59);
		array.addNumber(105);
		array.addNumber(106);
		array.displaySpan();
		std::cout << "Longest : " << array.longestSpan() << std::endl;
		std::cout << "Shortest : " << array.shortestSpan() << std::endl << std::endl;
	}
	catch ( std::exception &e )
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "******* TEST 2 *******" << std::endl;
		std::cout << "Span size = 2 test to add 3 numbers" << std::endl;
		Span array(2);
		array.addNumber(42);
		array.addNumber(59);
		array.addNumber(105);
		array.displaySpan();
		std::cout << "Longest : " << array.longestSpan() << std::endl;
		std::cout << "Shortest : " << array.shortestSpan() << std::endl;
	}
	catch ( std::exception &e )
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	try
	{
		Span array(10000);
		std::cout << "******* TEST 3 *******" << std::endl;
		std::cout << "Span size = 10000 test to add 10000 numbers" << std::endl;
		for (int i = 0; i < 10000; i++)
			array.addNumber(i);
		std::cout << "Longest : "  << array.longestSpan() << std::endl;
		std::cout << "Shortest : "  << array.shortestSpan() << std::endl << std::endl;
	}
	catch ( std::exception &e )
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	try
	{
		Span array(1);
		std::cout << "******* TEST 4 *******" << std::endl;
		std::cout << "Span size = 1 test to add 1 number and try to find longestSpan or ShortestSpan" << std::endl;
		array.addNumber(42);
		array.displaySpan();
		std::cout << "Longest : "  << array.longestSpan() << std::endl;
		std::cout << "Shortest : "  << array.shortestSpan() << std::endl << std::endl;
	}
	catch ( std::exception &e )
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	try
	{
		Span array(11);
		std::cout << "******* TEST 5 *******" << std::endl;
		std::cout << "Span size = 10 test to add 10 numbers with addNumber(n, size)" << std::endl;
		array.addNumber(42, 10);
		array.addNumber(7);
		array.displaySpan();
	}
	catch ( std::exception &e )
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	try
	{
		Span array(11);
		std::cout << "\n******* TEST 6 *******" << std::endl;
		std::cout << "Span size = 10 test to add 10 numbers with addNumber(it_vec, it_vec)" << std::endl;
		std::vector <int> test;
		for (int i = 0 ; i < 10; i++)
			test.push_back(i);
		array.addNumber(test.begin(), test.end());
		array.displaySpan();
	}
	catch ( std::exception &e )
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	try
	{
		Span array(10);
		std::cout << "\n******* TEST 7 *******" << std::endl;
		std::cout << "Span size = 10 test to add 11 numbers with addNumber(42, 11)" << std::endl;
		array.addNumber(42, 11);
		array.displaySpan();
	}
	catch ( std::exception &e )
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	try
	{
		Span array(10);
		std::cout << "\n******* TEST 8 *******" << std::endl;
		std::cout << "Span size = 10 test to add 11 numbers with addNumber(it, it)" << std::endl;
		std::vector <int> test;
		for (int i =0; i < 11; i++)
			test.push_back(i);
		array.addNumber(test.begin(), test.end());
		array.displaySpan();
	}
	catch ( std::exception &e )
	{
		std::cout << e.what() << std::endl << std::endl;
	}
}
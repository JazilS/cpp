/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:53:59 by jsabound          #+#    #+#             */
/*   Updated: 2023/12/13 15:41:58 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main (void)
{
	try
	{
		std::vector<int> tab_vector;
		std::vector<int>::iterator it;
		tab_vector.push_back(1);
		tab_vector.push_back(2);
		tab_vector.push_back(3);
		tab_vector.push_back(4);
		tab_vector.push_back(5);
		int valueToFind = 4;
		easyfind(tab_vector, valueToFind);

		std::list<int> tab_list;
		tab_list.push_back(10);
		tab_list.push_back(20);
		tab_list.push_back(30);
		tab_list.push_back(40);
		tab_list.push_back(50);
		valueToFind = 40;
		easyfind(tab_list, valueToFind);
	}
	catch (const std::runtime_error &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return (0);
}
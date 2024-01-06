/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 18:35:48 by jsabound          #+#    #+#             */
/*   Updated: 2023/12/13 16:53:58 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>
#include <vector>

int	main(void)
{
	// ################################################ //
	// ########## Utilisation de Mutant stack ######### //
	// ################################################ //
	std::cout << "Utilisation de Mutant stack" << std::endl;
	std::cout << std::endl;

	MutantStack<int> mstack; 
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top of MutantStack: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size of MutantStack: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << "Elements of MutantStack:" << std::endl;
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	
	// ################################################ //
	// ########### Utilisation de std::list ########### //
	// ################################################ //
	
	std::cout << "Utilisation de std::list" << std::endl;
	std::cout << std::endl;

	std::list<int> l;
	l.push_back(5);
	l.push_back(17);
	std::cout << "Top of std::list: " << l.back() << std::endl;
	l.pop_back();
	std::cout << "Size of std::list: " << l.size() << std::endl;
	l.push_back(3);
	l.push_back(5);
	l.push_back(737);
	l.push_back(0);

	std::list<int>::iterator lit = l.begin();
	std::list<int>::iterator lite = l.end();
	std::cout << "Elements of std::list:" << std::endl;
	++lit;
	--lit;
	while (lit != lite)
	{
		std::cout << *lit << " ";
		++lit;
	}
	std::cout << std::endl;

	return (0);
}
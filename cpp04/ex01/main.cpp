/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:52:02 by jsabound          #+#    #+#             */
/*   Updated: 2023/12/01 19:07:44 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
# include "Cat.hpp"
# include "Dog.hpp"

int main()
{
	Animal* animals[10];
	
	for (int i = 0; i < 10; i++)
	{
		if (i >= 5)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	Cat copy(*(Cat*)animals[1]);
	Dog cpy(*(Dog*)animals[4]);
	std::cout << std::endl;
	// for (int i = 0; i < 100; i++)
	// {
	// 	std::cout << "Cat:: " << copy.getBrain()->getIdea(i) << " in class cat : "  << "\n" << std::endl;
	// 	std::cout << " Dog :: " << cpy.getBrain()->getIdea(i) << " in class dog : " << std::endl;
	// }
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
	}
}
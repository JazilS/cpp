/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:52:02 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/11 16:40:55 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
# include "Cat.hpp"
# include "WrongCat.hpp"
# include "Dog.hpp"

int main() 
{
	std::cout << "-----------------ANIMAL--------------" << std::endl;
	const Animal* meta = new Animal(); 
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "type: " << meta->getType() << " " << std::endl; 
	std::cout << "type: " << j->getType() << " " << std::endl; 
	std::cout << "type: " << i->getType() << " " << std::endl; 
	i->makeSound(); //will output the cat sound! 
	j->makeSound();
    meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << "-----------------WRONG--------------" << std::endl;
	const WrongAnimal* wmeta = new WrongAnimal(); 
	const WrongAnimal* wi = new WrongCat();
	const WrongCat* we = new WrongCat();

	std::cout << "type: " << wmeta->getType() << " " << std::endl; 
	std::cout << "type: " << wi->getType() << " " << std::endl; 
	wi->makeSound();
	we->makeSound();
    wmeta->makeSound();

	delete wmeta;
	delete wi;
	delete we;

return 0; }
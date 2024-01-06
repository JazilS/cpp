/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:52:02 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/11 16:47:48 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
# include "Cat.hpp"
# include "Dog.hpp"

int main()
{
	// Animal animal;
	
    // Test 1: Créez et supprimez un chien
    const Animal* j = new Dog();
    delete j; // Ne doit pas créer de fuite de mémoire

    // Test 2: Créez et supprimez un chat
    const Animal* i = new Cat();
    delete i; // Ne doit pas créer de fuite de mémoire

    // Test 3: Créez un tableau d'animaux (chien et chat) et supprimez-les
    const int numAnimals = 4;
    Animal* animals[numAnimals];

    for (int k = 0; k < numAnimals; ++k)
    {
        if (k < numAnimals / 2)
        {
            animals[k] = new Dog();
        }
        else
        {
            animals[k] = new Cat();
        }
    }

    for (int k = 0; k < numAnimals; ++k)
    {
        delete animals[k]; // Ne doit pas créer de fuite de mémoire
    }

    return 0;
}
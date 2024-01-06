/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:51:51 by jsabound          #+#    #+#             */
/*   Updated: 2023/10/21 16:58:00 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public :

	Dog();
	Dog(const Dog &copie);
	Dog(const std::string &name);
	~Dog();
	Dog& operator=(const Dog &copie);
	void makeSound() const;

	private :

	Brain *brain;
};

#endif
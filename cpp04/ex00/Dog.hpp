/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:51:51 by jsabound          #+#    #+#             */
/*   Updated: 2023/10/21 15:11:09 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"


class Dog : public Animal
{
	public :

	Dog();
	Dog(const Dog &copie);
	Dog(const std::string &name);
	~Dog();
	Dog& operator=(const Dog &copie);
	void makeSound() const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:03:27 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/11 19:10:27 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default constructor called for a Brain" << std::endl;
}

Brain::Brain(const Brain &copie)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = copie;
}

Brain::~Brain()
{
	std::cout << "Destructor called for a Brain" << std::endl;
}

Brain& Brain::operator=(const Brain &copie)
{
	if (this != &copie)
	{
		for (int i = 0; i < 100; ++i)
			this->ideas[i] = copie.ideas[i];
	}
	return (*this);
}
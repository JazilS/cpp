/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:18:51 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/11 15:47:12 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	AMateria::type = "ice";
}

Ice::Ice(const Ice &copie)
{
		*this = copie;
}

Ice& Ice::operator=(const Ice &copie)
{
    if (this != &copie)
    {
        type = copie.type;
    }
    return *this;
}

Ice::~Ice()
{
	
}

AMateria* Ice::clone() const
{
	Ice *temp = new Ice(*this);
	return temp;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
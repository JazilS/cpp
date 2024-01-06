/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:21:07 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/11 15:02:18 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	AMateria::type = "cure";
}

Cure::Cure(const Cure &copie)
{
		*this = copie;
}

Cure& Cure::operator=(const Cure &copie)
{
    if (this != &copie)
    {
        type = copie.type;
    }
    return *this;
}

Cure::~Cure()
{
	
}

AMateria* Cure::clone() const
{
	Cure *temp = new Cure(*this);
	return temp;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
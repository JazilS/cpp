/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:36:49 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/11 15:22:05 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	this->type = "AMateria";
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
}

AMateria::~AMateria()
{
	
}

AMateria::AMateria(const AMateria &copie)
{
		*this = copie;
}

AMateria& AMateria::operator=(const AMateria &copie)
{
    if (this != &copie)
    {
        this->type = copie.type;
    }
    return *this;
}

std::string const &AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "Using " << type << " materia on " << target.getName() << std::endl;
}

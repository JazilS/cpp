/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:49:08 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/11 16:22:44 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4; i++)
		materia[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource &copie)
{
	*this = copie;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copie)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->materia[i])
		{
			if (this->materia[i] != copie.materia[i])
				this->materia[i] = copie.materia[i];
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		delete this->materia[i];
		this->materia[i] = 0;
	}
}

void MateriaSource::learnMateria(AMateria *materia)
{
	 for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] == 0)
		{
			this->materia[i] = materia;
			return;
		}
	}
	std::cerr << "MateriaSource is full. Cannot learn more Materias.\n";
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] != 0 && this->materia[i]->getType() == type)
		{
			return this->materia[i]->clone();
		}
	}
	std::cerr << "Unknown Materia type: " << type << std::endl;
	return 0;
}

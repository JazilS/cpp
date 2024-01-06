/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:47:59 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/11 15:21:02 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public :

	MateriaSource();
	MateriaSource(const MateriaSource &copie);
	MateriaSource& operator=(const MateriaSource &copie);
	~MateriaSource();
	void learnMateria(AMateria* materia);
	AMateria* createMateria(std::string const & type);

	private :
	
	AMateria *materia[4];
};

#endif
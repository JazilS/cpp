/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:12:01 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/11 15:26:43 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

# include <cmath>
# include <cstdlib>
# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string.h>
# include <string>
# include "ICharacter.hpp"


class AMateria
{
	protected :

	std::string type;
	
	public :

	AMateria();
	virtual ~AMateria();
	AMateria(std::string const &type);
	AMateria(const AMateria &copie);
	AMateria& operator=(const AMateria &copie);
	
	std::string const &getType() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
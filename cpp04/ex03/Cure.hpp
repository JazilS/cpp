/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:20:35 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/11 15:20:43 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

# include <cmath>
# include <cstdlib>
# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string.h>
# include <string>

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	public :

	Cure();
	Cure(const Cure &copie);
	~Cure();
	Cure& operator=(const Cure &copie);
	AMateria* clone() const;
	void use(ICharacter& target);
};


#endif
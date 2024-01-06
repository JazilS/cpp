/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:15:36 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/11 15:20:56 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

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

class Ice : public AMateria
{
	public :

	Ice();
	Ice(const Ice &copie);
	~Ice();
	Ice& operator=(const Ice &copie);
	AMateria* clone()const ;
	void use(ICharacter& target);
};


#endif
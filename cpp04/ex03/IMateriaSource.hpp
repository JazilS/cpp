/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:46:01 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/11 15:21:00 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

# include <cmath>
# include <cstdlib>
# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string.h>
# include <string>

# include "AMateria.hpp"

class IMateriaSource
{
public:
virtual ~IMateriaSource() {}
virtual void learnMateria(AMateria*) = 0;
virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
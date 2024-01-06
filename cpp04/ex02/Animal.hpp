/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:51:38 by jsabound          #+#    #+#             */
/*   Updated: 2023/10/21 19:01:11 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <cmath>
# include <cstdlib>
# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string.h>
# include <string>

class Animal
{
	public :

	Animal();
	Animal(const std::string &name);
	Animal(const Animal &copie);
	virtual ~Animal();
	Animal& operator=(const Animal &copie);
	virtual void makeSound() const = 0;
	std::string getType() const ;
	
	protected :

	std::string type;
};


#endif
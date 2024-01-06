/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:51:38 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/11 16:42:08 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

# include <cmath>
# include <cstdlib>
# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string.h>
# include <string>

class WrongAnimal
{
	public :

	WrongAnimal();
	WrongAnimal(const std::string &name);
	WrongAnimal(const WrongAnimal &copie);
	virtual ~WrongAnimal();
	WrongAnimal& operator=(const WrongAnimal &copie);
	void makeSound() const;
	std::string getType() const ;
	
	protected :

	std::string type;
};


#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:26:21 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/11 15:20:48 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <cmath>
# include <cstdlib>
# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string.h>
# include <string>

class Character : public ICharacter
{
  public:
	Character();
	Character(const Character &copie);
	Character(std::string name);
	Character &operator=(const Character &copie);
	~Character();
	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);

  private:
	AMateria *tab[4];
	AMateria *temp[20];
	std::string name;
};
#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:58:11 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/07 23:19:12 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>
# include "Weapon.hpp"

class HumanB
{
	public :

	HumanB(const std::string &name);
	~HumanB();
	void attack();
	void setWeapon(Weapon &weapon);
	
	
	private:
	
	std::string name;
	Weapon *weapon;
};

#endif
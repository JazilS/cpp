/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:53:07 by jsabound          #+#    #+#             */
/*   Updated: 2023/09/28 19:37:13 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>
# include "Weapon.hpp"

class HumanA
{
	public :

	HumanA(const std::string& name, Weapon &weapon);
	~HumanA();
	void attack();
		
	private:
	
	std::string name;
	Weapon &weapon;
};

#endif
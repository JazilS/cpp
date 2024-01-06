/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:24:13 by jsabound          #+#    #+#             */
/*   Updated: 2023/09/28 18:45:56 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>

class Weapon
{
	public :

	Weapon(const std::string &type);
	~Weapon();
	const std::string &getType() const;
	void setType(const std::string &type);
	
	private :

	std::string type;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:44:18 by jsabound          #+#    #+#             */
/*   Updated: 2023/10/22 17:55:14 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <cmath>
# include <cstdlib>
# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string.h>
# include <string>

class ClapTrap
{
	public :

	ClapTrap();
	ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap &copie);
	~ClapTrap();
	ClapTrap &operator=(const ClapTrap &copie);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
	protected :

	std::string name;
	unsigned int hit_points;
	unsigned int energy_points;
	unsigned int attack_damage;
};

#endif
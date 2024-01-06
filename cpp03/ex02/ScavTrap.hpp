/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:32:40 by jsabound          #+#    #+#             */
/*   Updated: 2023/10/19 20:05:46 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :

	ScavTrap();
	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap &copie);
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap &copie);
	void guardGate();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
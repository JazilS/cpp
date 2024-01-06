/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:27:33 by jsabound          #+#    #+#             */
/*   Updated: 2023/10/21 14:56:57 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public :

	FragTrap();
	FragTrap(const std::string& name);
	FragTrap(const FragTrap &copie);
	~FragTrap();
	FragTrap& operator=(const FragTrap &copie);
	void attack(const std::string& target);
	void highFivesGuys(void);
};

#endif
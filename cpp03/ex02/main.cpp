/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:04:00 by jsabound          #+#    #+#             */
/*   Updated: 2023/10/19 20:18:22 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ScavTrap david("David");
	FragTrap goliath("Goliath");
	FragTrap lol(goliath);
	
	david.attack("Goliath");
	goliath.attack("David");
	goliath.highFivesGuys();

	return 0;
}
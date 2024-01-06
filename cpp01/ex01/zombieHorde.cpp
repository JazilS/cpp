/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:56:11 by jsabound          #+#    #+#             */
/*   Updated: 2023/09/28 18:07:22 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *horde_zombie = new Zombie[N];
	int i = 0;

	while(i < N)
	{
		horde_zombie[i].add_name(name);
		i++;
	}
	return(&horde_zombie[0]);
}
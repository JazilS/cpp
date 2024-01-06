/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:55:28 by jsabound          #+#    #+#             */
/*   Updated: 2023/09/28 18:13:08 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int i = 0;
	int N = 8;
	Zombie *horde_zombie = zombieHorde(N, "Z");
	
	while(i < N)
	{
		horde_zombie[i].anounce();
		i++;
	}
	delete [] horde_zombie;
	return 0;
}
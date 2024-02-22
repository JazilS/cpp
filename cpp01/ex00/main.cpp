/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:34:24 by jsabound          #+#    #+#             */
/*   Updated: 2024/01/17 13:54:24 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *stack_zombie = newZombie("stack_zombie");
	stack_zombie->anounce();
	randomChump("heap_zombie");

	delete stack_zombie;
}
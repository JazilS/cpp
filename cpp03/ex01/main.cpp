/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:04:00 by jsabound          #+#    #+#             */
/*   Updated: 2023/12/01 19:06:17 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("Odin");
    ScavTrap scav2("Floki");
    ScavTrap scaav = scav;
    scav.attack("Floki");
    scav2.takeDamage(50);
    scav2.beRepaired(10);
    scav2.guardGate();
    return 0;
}
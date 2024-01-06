/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:00:38 by jsabound          #+#    #+#             */
/*   Updated: 2023/09/28 19:52:44 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) : name(name), weapon(weapon)
{
}

HumanA::~HumanA()
{
	

}
void HumanA::attack()
{
	std::cout << this->name << " attacks with their " << weapon.getType() << std::endl;
} 
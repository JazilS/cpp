/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:04:00 by jsabound          #+#    #+#             */
/*   Updated: 2023/10/18 17:28:35 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap gentil("gentil");
	ClapTrap mechant("mechant");
	
	mechant.attack("gentil");
	gentil.attack("mechant");
}
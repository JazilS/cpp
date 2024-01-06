/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:09:12 by jsabound          #+#    #+#             */
/*   Updated: 2023/10/01 16:40:37 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (void)
{
	Harl harl;
	
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	return (0);
}
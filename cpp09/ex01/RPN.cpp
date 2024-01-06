/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 18:19:14 by jsabound          #+#    #+#             */
/*   Updated: 2023/12/15 18:22:35 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
	
}

RPN::RPN(const RPN& copie)
{
	*this = copie;
}

RPN& RPN::operator=(const RPN& src)
{
	(void)src;
	return *this;
}

RPN::~RPN()
{
	
}

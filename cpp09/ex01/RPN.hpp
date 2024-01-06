/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 18:19:16 by jsabound          #+#    #+#             */
/*   Updated: 2023/12/14 20:17:20 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <cstdlib>
#include <iostream>
#include <sstream>
#include <stack>
#include <cstring>

class RPN
{
	public :

	RPN();
	RPN(const RPN& copie);
	RPN& operator=(const RPN& src);
	~RPN();
	
	private :

};

#endif
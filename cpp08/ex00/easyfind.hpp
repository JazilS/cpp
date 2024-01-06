/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:54:05 by jsabound          #+#    #+#             */
/*   Updated: 2023/12/13 16:57:29 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <list>
#include <iostream>

template <typename T>

void easyfind(T container, int nb)
{
	typename T::iterator it;
	for(it = container.begin() ; it != container.end(); ++it)
	{
		if (*it == nb)
		{
			std::cout << "Occurence trouve : " << nb << std::endl;
			return ;
		}
	}
	throw std::runtime_error("Value not found.");
}

#endif
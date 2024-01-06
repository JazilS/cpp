/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 20:16:50 by jsabound          #+#    #+#             */
/*   Updated: 2023/12/11 19:03:09 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstdlib>
# include <cstring>
# include <fstream>
# include <iostream>
# include <string>

template <typename T, typename Func>
void iter(T *array, int length, Func func)
{
	for (int i = 0; i < length; ++i)
		func(array[i]);
}

template <typename T>
void printElement(const T &element)
{
	std::cout << element << " ";
}

#endif
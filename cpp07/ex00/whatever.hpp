/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 20:01:40 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/22 20:14:17 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <cstdlib>
#include <string>

template <typename T> void swap(T &a, T &b)
{
	T	temp;

	temp = a;
	a = b;
	b = temp;
}

template <typename T> T min(const T &a, const T &b)
{
	return ((a < b) ? a : b);
}

template <typename T> T max(const T &a, const T &b)
{
	return ((a > b) ? a : b);
}

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:00:04 by jsabound          #+#    #+#             */
/*   Updated: 2023/12/13 16:08:48 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <string>
#include <vector>
#include <iostream>
#include <limits.h>
#include <algorithm>

typedef std::vector<int>::iterator it_vec;


class Span
{
	public :

	Span();
	~Span();
	Span(size_t n);
	Span(const Span &copie);
	Span& operator=(const Span &src);
	void addNumber(int nb);
	void addNumber(int nb, int size);
	int shortestSpan();
	int longestSpan();
	void displaySpan();
	void addNumber(it_vec begin,it_vec end);

	private :

	size_t N;
	std::vector<int> tab;
};

#endif
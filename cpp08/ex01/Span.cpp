/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:00:02 by jsabound          #+#    #+#             */
/*   Updated: 2023/12/13 16:46:15 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N(0){};

Span::~Span() {};

Span::Span(size_t n) : N(n), tab(0) {};

Span::Span(const Span &copie)
{
	this->N = copie.N;
	tab.assign(copie.tab.begin(), copie.tab.end());
}

Span& Span::operator=(const Span &src)
{
	if (this != &src)
	{
		this->N = src.N;
		this->tab.assign(src.tab.begin(), src.tab.end());
	}
	return(*this);
}

void Span::addNumber(int nb)
{
	if (tab.size() < N)
		tab.push_back(nb);
	else
		throw std::runtime_error("Capacity limit reached, Cannot add more numbers");
}

void Span::addNumber(int n, int size)
{
	if (tab.size() + size > N)
		throw std::out_of_range("Error :: Out of range");
	for (int i = 0; i < size; i++)
		tab.push_back(n);
}

void Span::addNumber(it_vec begin, it_vec end)
{
	if (tab.size() + std::distance(begin, end) > N)
		throw std::out_of_range("Error :: Out of range");
	std::vector<int> tempVec(begin, end);
	tab.insert(tab.end(), tempVec.begin(), tempVec.end());
}

int Span::shortestSpan()
{
	if (tab.size() < 2)
		throw std::runtime_error("Can't find the shortestSpan.");
	std::sort(tab.begin(), tab.end());

	int span;
	int shortest = INT_MAX;
	for(size_t i = 1; i < tab.size(); i++)
	{
		span = tab[i] - tab[i - 1];
		if (span < shortest)
			shortest = span;
	}
	return (shortest);
}
int Span::longestSpan()
{
	if (tab.size() < 2)
		throw std::runtime_error("Can't find the longestSpan.");
	std::sort(tab.begin(), tab.end());

	int longuest = tab[tab.size() - 1] - tab[0];
	return (longuest);
}

void Span::displaySpan(void)
{
	for (it_vec it = tab.begin(); it != tab.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}
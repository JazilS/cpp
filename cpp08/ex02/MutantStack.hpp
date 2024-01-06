/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 18:35:52 by jsabound          #+#    #+#             */
/*   Updated: 2023/12/02 19:45:25 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <deque>
# include <iostream>
# include <stack>

template <typename T, typename Container = std::deque<T> > 

class MutantStack : public std::stack<T>
{
	public:
	MutantStack(void)
	{
		return ;
	}

	MutantStack(const MutantStack &src)
	{
		*this = src;
		return ;
	}

	~MutantStack(void)
	{
		return ;
	}

	MutantStack &operator=(const MutantStack &copie)
	{
		if (*this != copie)
			this->c = copie.c;
		return (*this);
	}

	typedef typename std::stack<T,Container>::container_type::iterator iterator;

	iterator begin(void)
	{
		return (this->c.begin());
	}

	iterator end(void)
	{
		return (this->c.end());
	}
};

#endif
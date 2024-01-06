/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:46:50 by jsabound          #+#    #+#             */
/*   Updated: 2023/12/04 18:07:50 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "Base.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

Base	*generate(void)
{
	int	randomValue;

	randomValue = rand() % 3;
	if (randomValue == 0)
		return (new A());
	else if (randomValue == 1)
		return (new B());
	else
		return (new C());
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	} catch (const std::exception &e) {}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	} catch (const std::exception &e) {}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;
	} catch (const std::exception &e) {}
}

int	main(void)
{
	srand((time(0)));
	Base *obj1 = generate();
	Base *obj2 = generate();
	Base *obj3 = generate();

	std::cout << "obj1:" << std::endl;
	identify(obj1);
	identify(*obj1);
	std::cout << std::endl << "obj2:" << std::endl;
	identify(obj2);
	identify(*obj2);
	std::cout << std::endl << "obj3:" << std::endl;
	identify(obj3);
	identify(*obj3);

	delete obj1;
	delete obj2;
	delete obj3;
}

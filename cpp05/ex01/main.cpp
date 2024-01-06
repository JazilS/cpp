/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:06:38 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/18 15:26:43 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{

	std::cout << "--------Random----------" << std::endl;
	try
	{
		Bureaucrat Random("Random", 50);
		Form Alt1("Alt1", 50, 10);
		Form Alt2("Alt2", 20, 20);
		std::cout << Random << Alt1 << Alt2;
		Random.signForm(Alt1);
		Random.signForm(Alt2);
		std::cout << Alt1 << Alt2;
		std::cout << "-------Operateur = ---------" << std::endl;
		Alt1 = Alt2;
		std::cout << Alt1 << Alt2;
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
	return 0;
};
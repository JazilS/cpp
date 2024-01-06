/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:06:38 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/30 20:12:27 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	try
	{
		Bureaucrat Boss("Boss", 1);
		// Bureaucrat Recruit("Recruit", 150);
		Intern someRandomIntern;
		AForm *rrf;

		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");

		if (rrf != NULL)
		{
			Boss.signForm(*rrf);
			delete rrf;
		}
		else
		{
			std::cout << "Cannot sign a NULL form." << std::endl;
		}
		
		rrf = someRandomIntern.makeForm("Test", "Bender");
		if (rrf != NULL)
		{
			Boss.signForm(*rrf);
			delete rrf;
		}
		else
		{
			std::cout << "Cannot sign a NULL form." << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
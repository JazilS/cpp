/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:06:38 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/30 20:03:54 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	try
	{
		std::cout << "--------ShrubberyCreationForm----------" << std::endl;
		Bureaucrat Boss("Boss", 1);
		Bureaucrat Recruit("Recruit", 150);
		ShrubberyCreationForm f1("tree");
		std::cout << Boss << Recruit << f1 << std::endl;

		Boss.executeForm(f1);
		Recruit.executeForm(f1);
		Recruit.signForm(f1);
		Boss.signForm(f1);
		Recruit.executeForm(f1);
		Boss.executeForm(f1);
		std::cout << f1 << std::endl;

		std::cout << "--------RobotomyRequestForm---------" << std::endl;
		RobotomyRequestForm f2("frank");
		Boss.executeForm(f2);
		Recruit.executeForm(f2);
		Recruit.signForm(f2);
		Boss.signForm(f2);
		Recruit.executeForm(f2);
		Boss.executeForm(f2);
		Boss.executeForm(f2);
		Boss.executeForm(f2);
		Boss.executeForm(f2);

		std::cout << std::endl << "--------PresidentialPardonForm--------" << std::endl;
		PresidentialPardonForm f3("eden");
		Boss.executeForm(f3);
		Recruit.executeForm(f3);
		Recruit.signForm(f3);
		Boss.signForm(f3);
		Recruit.executeForm(f3);
		Boss.executeForm(f3);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
};
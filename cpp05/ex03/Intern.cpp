/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:47:53 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/30 20:11:10 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &src)
{
	*this = src;
}

Intern &Intern::operator=(const Intern &)
{
	return (*this);
}

Intern::~Intern()
{
}

AForm *Intern::makeForm(const std::string &nameForm, const std::string &target)
{
	AForm	*result;

	std::string word[3] = {"shrubbery creation", "robotomy request",
		"presidential pardon"};
	AForm *forms[] = {
		new ShrubberyCreationForm(target),
		new RobotomyRequestForm(target),
		new PresidentialPardonForm(target),
	};
	result = NULL;
	for (int i = 0; i < 3; i++)
	{
		if (word[i].compare(nameForm) == 0)
		{
			std::cout << "Intern creates " << nameForm << " Form" << std::endl;
			result = forms[i];
		}
		else
			delete forms[i];
	}
	if (!result)
	{
		std::cout << "Intern cannot create " << nameForm << " form" << std::endl;
	}
	return (result);
}

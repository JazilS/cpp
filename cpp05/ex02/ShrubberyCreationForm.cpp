/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:19:21 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/20 19:18:27 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation Form",
	145, 137), target("default")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("Shrubbery Creation ",
	145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
{
	*this = src;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	if (this != &src)
	{
		this->target = src.target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->target);
}
void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (getSigned() == false)
		throw NotSignedException();
	else if (executor.getGrade() > getGrade_Exec())
		throw GradeTooLowException();

	std::ofstream file((target + "_shrubbery").c_str());

	if (!file.is_open())
		throw ErrorOpen();
	if (file.is_open())
	{
		file << "    *\n";
		file << "   ***\n";
		file << "  *****\n";
		file << " *******\n";
		file << "*********\n";
		file << "   |||\n";
		file.close();
	}
}
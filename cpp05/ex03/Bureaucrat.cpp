/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:06:44 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/20 19:24:02 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : name("random")
{
	grade = 150;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::~Bureaucrat()
{
}

std::string Bureaucrat::Bureaucrat::getName() const
{
	return (name);
}

int Bureaucrat::getGrade() const
{
	return (grade);
}

void Bureaucrat::upGrade()
{
	if (grade > 1)
		grade--;
	else
		throw GradeTooHighException();
}

void Bureaucrat::downGrade()
{
	if (grade < 150)
		grade++;
	else
		throw GradeTooLowException();
}

void Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << name << " signed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj)
{
	os << obj.getName() << ", grade du bureaucrate " << obj.getGrade() << std::endl;
	return (os);
}

void Bureaucrat::executeForm(const AForm &form) const
{
	try
	{
		form.execute(*this);
		std::cout << getName() << " executed " << form.getName() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << getName() << " could not execute " << form.getName() << " because " << e.what() << std::endl;
	}
}
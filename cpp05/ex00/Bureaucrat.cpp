/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:06:44 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/18 15:25:20 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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

std::string Bureaucrat::getName()const 
{
	return name;
}

int Bureaucrat::getGrade()const
{
	return grade;
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

std::ostream& operator<<(std::ostream& os, const Bureaucrat &bureaucrate)
{
    os << bureaucrate.getName() << ", grade du bureaucrate " << bureaucrate.getGrade() << std::endl;
    return os;
}
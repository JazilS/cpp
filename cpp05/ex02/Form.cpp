/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:11:39 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/18 17:55:53 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name(""), _signed(false), grade_signed(150), grade_exec(150)
{
}

AForm::AForm(const std::string name, const int grade_signed,
	const int grade_exec) : name(name), _signed(false),
	grade_signed(grade_signed), grade_exec(grade_exec)
{
}

AForm::AForm(const AForm &copie) : name(copie.name), _signed(copie._signed),
	grade_signed(copie.grade_signed), grade_exec(copie.grade_exec)

{
}

AForm::~AForm()
{
}

AForm &AForm::operator=(const AForm &src)
{
	if (this != &src)
	{
		_signed = src._signed;
	}
	return (*this);
}

std::string AForm::getName() const
{
	return (this->name);
}

bool AForm::getSigned() const
{
	return (this->_signed);
}

int AForm::getGrade_Sign() const
{
	return (this->grade_signed);
}

int AForm::getGrade_Exec() const
{
	return (this->grade_signed);
}

void AForm::beSigned(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() <= this->getGrade_Sign())
		this->_signed = true;
	else
		throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, const AForm &obj)
{
	os << "AForm: " << obj.getName() << ", Grade to Sign: " << obj.getGrade_Sign() << ", Grade to Execute: " << obj.getGrade_Exec() << ", Signed: " << (obj.getSigned() ? "Yes" : "No") << std::endl;
	return (os);
}


void AForm::execute(Bureaucrat const &executor) const
{
	if (!getSigned())
	{
		std::cout << executor.getName() << " cannot execute the form. It is not signed." << std::endl;
		return ;
	}

	if (executor.getGrade() > getGrade_Exec())
	{
		std::cout << executor.getName() << " cannot execute the form. Bureaucrat's grade is too low." << std::endl;
		return ;
	}
}

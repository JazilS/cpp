/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:11:39 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/18 15:24:10 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name(""), _signed(false), grade_signed(150), grade_exec(150)
{
}

Form::Form(const std::string name, const int grade_signed, const int grade_exec) : 
	name(name), 
	_signed(false),
	grade_signed(grade_signed),
	 grade_exec(grade_exec)
{
}

Form::Form(const Form &copie) :
	name(copie.name),
	_signed(copie._signed),
	grade_signed(copie.grade_signed),
	 grade_exec(copie.grade_exec)
	
{
}

Form::~Form()
{
	
}

Form &Form::operator=(const Form &src)
{
	if (this != &src)
	{
		_signed = src._signed;
	}
	return (*this);
}

std::string Form::getName() const
{
	return (this->name);
}

bool Form::getSigned() const
{
	return (this->_signed);
}

int Form::getGrade_Sign() const
{
	return (this->grade_signed);
}

int Form::getGrade_Exec() const
{
	return (this->grade_signed);
}

void Form::beSigned(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() <= this->getGrade_Sign())
		this->_signed = true;
	else
		throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, const Form &obj)
{
	os << "Form: " << obj.getName() << ", Grade to Sign: " << obj.getGrade_Sign()
		<< ", Grade to Execute: " << obj.getGrade_Exec() << ", Signed: " << (obj.getSigned() ? "Yes" : "No") << std::endl;
	return (os);
}

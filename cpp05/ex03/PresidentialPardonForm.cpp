/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:20:17 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/20 19:19:31 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm",
	25, 5), target("default")
{
}
PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm creation",
	25, 5), target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
{
	*this = src;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	if (this != &src)
	{
		this->target = src.target;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

std::string PresidentialPardonForm::getTarget() const
{
	return (this->target);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (getSigned() == false)
		throw NotSignedException();
	else if (executor.getGrade() <= getGrade_Sign())
	{
		std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
	else
	{
		throw PresidentialPardonFormGradeTooHighException();
	}
}

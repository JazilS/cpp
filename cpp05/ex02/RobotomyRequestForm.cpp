/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:20:19 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/20 19:19:45 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72,
	45), target("default")
{
}
RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm creation",
	72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
{
	*this = src;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	if (this != &src)
	{
		this->target = src.target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

std::string RobotomyRequestForm::getTarget() const
{
	return (this->target);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (getSigned() == false)
		throw NotSignedException();
	else if (executor.getGrade() > getGrade_Exec())
		throw GradeTooLowException();
	std::cout << "Bzzz... Making drilling noises..." << std::endl;
	int randomValue = rand();
	if (randomValue <= RAND_MAX / 2)
	{
		std::cout << getTarget() << " has been robotomized successfully!" << std::endl;
	}
	else
	{
		std::cout << "Robotomy of " << getTarget() << " failed." << std::endl;
	}
}

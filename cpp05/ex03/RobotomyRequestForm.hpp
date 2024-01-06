/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:20:14 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/20 19:19:50 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREAUESTFORM
#define ROBOTOMYREAUESTFORM

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public :

	RobotomyRequestForm();
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm &src);
	RobotomyRequestForm& operator=(const RobotomyRequestForm &src);
	~RobotomyRequestForm();
	std::string getTarget()const ;
	virtual void execute(Bureaucrat const &executor) const;
	
	class RobotomyRequestFormGradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "RobotomyRequestForm grade is too high";
		}
	};

	class RobotomyRequestFormGradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "RobotomyRequestForm grade is too low";
		}
	};
	class NotSignedException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "RobotomyRequestForm is not Signed";
		}
	};

	private :

	std::string target;
};

#endif
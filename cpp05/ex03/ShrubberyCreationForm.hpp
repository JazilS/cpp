/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:04:11 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/20 18:44:24 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM
#define SHRUBBERYCREATIONFORM

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	public :
	
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &src);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm &src);
	~ShrubberyCreationForm();
	std::string getTarget() const;
	virtual void execute(Bureaucrat const &executor) const;
	
	class ShrubberyCreationGradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "ShrubberyCreationForm grade is too high";
		}
	};

	class ShrubberyCreationGradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "ShrubberyCreationForm grade is too low";
		}
	};
	class NotSignedException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "ShrubberyCreationForm is not Signed";
		}
	};
	class ErrorOpen : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Error while open";
		}
	};
	
	private :

	std::string target;
};

#endif
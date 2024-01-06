/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:20:11 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/20 19:19:35 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM
# define PRESIDENTIALPARDONFORM

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
  public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm &src);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &src);
	~PresidentialPardonForm();
	std::string getTarget()const ;
	virtual void execute(Bureaucrat const &executor) const;

	class PresidentialPardonFormGradeTooHighException : public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			return ("PresidentialPardonForm grade is too high");
		}
	};

	class PresidentialPardonFormGradeTooLowException : public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			return ("PresidentialPardonForm grade is too low");
		}
	};
	class NotSignedException : public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			return ("PresidentialPardonForm is not Signed");
		}
	};

  private:
	std::string target;
};

#endif
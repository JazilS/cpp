/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:06:43 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/20 19:21:27 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT
# define BUREAUCRAT

# include <cmath>
# include <cstdlib>
# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string.h>
# include <string>
# include "AForm.hpp"
class AForm ;

class Bureaucrat
{
  public:
  
	class GradeTooHighException : public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			return ("Grade of Bureaucrat is too High !");
		}
	};

	class GradeTooLowException : public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			return ("Grade of Bureaucrat is too Low !");
		}
	};

	Bureaucrat();
	Bureaucrat(const std::string &name, int grade);
	~Bureaucrat();
	std::string getName() const;
	int getGrade() const;
	void upGrade();
	void downGrade();
	void signForm(AForm &form);
	void executeForm(AForm const & form) const;
  private:
	const std::string name;
	int grade;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);

#endif
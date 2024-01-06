/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:33:39 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/30 20:01:16 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM
# define FORM

# include "Bureaucrat.hpp"
class Bureaucrat ;

class Form
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

	Form();
	Form(const std::string name, const int grade_signe, const int grade_exec);
	Form(const Form &copie);
	~Form();
	Form& operator=(const Form &srcs);
	std::string getName()const ;
	bool getSigned()const;
	int getGrade_Sign()const;
	int getGrade_Exec()const;
	void beSigned(Bureaucrat bureaucrat);

  private:
	const std::string name;
	bool _signed;
	const int grade_signed;
	const int grade_exec;
};

std::ostream &operator<<(std::ostream &os, const Form &obj);

#endif
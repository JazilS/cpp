/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:33:39 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/20 20:48:39 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM
# define AFORM

# include "Bureaucrat.hpp"
class Bureaucrat ;

class AForm
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

	AForm();
	AForm(const std::string name, const int grade_signe, const int grade_exec);
	AForm(const AForm &copie);
	virtual ~AForm();
	AForm& operator=(const AForm &srcs);
	std::string getName()const ;
	bool getSigned()const;
	virtual int getGrade_Sign()const;
	virtual void execute(Bureaucrat const & executor) const = 0;
	int getGrade_Exec()const;
	void beSigned(Bureaucrat bureaucrat);
	

  private:
	const std::string name;
	bool _signed;
	const int grade_signed;
	const int grade_exec;
};

std::ostream &operator<<(std::ostream &os, const AForm &obj);

#endif
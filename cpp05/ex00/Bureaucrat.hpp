/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:06:43 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/16 19:28:35 by jsabound         ###   ########.fr       */
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

class Bureaucrat
{
  public:
  
	class GradeTooHighException : public std::exception
	{
		public:
		const char *what() const throw()
		{
			return ("Le grade du bureaucrate est trop élevé !");
		}
	};

	class GradeTooLowException : public std::exception
	{
		public:
		const char *what() const throw()
		{
			return ("Le grade du bureaucrate est trop bas !");
		}
	};

	Bureaucrat();
	Bureaucrat(const std::string &name, int grade);
	~Bureaucrat();
	std::string getName() const;
	int getGrade()const ;
	void upGrade();
	void downGrade();

  private:
	const std::string name;
	int grade;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrate);

#endif
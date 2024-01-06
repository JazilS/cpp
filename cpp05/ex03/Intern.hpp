/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:41:37 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/20 20:47:41 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN
#define INTERN

#include "AForm.hpp"

class Intern
{
	public :
	
	Intern();
	Intern(const Intern &src);
	Intern& operator=(const Intern &srcs);
	~Intern();
	AForm *makeForm(const std::string &nameForm, const std::string &target);
	
};

#endif
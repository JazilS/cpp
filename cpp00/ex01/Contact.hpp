/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:59:57 by jsabound          #+#    #+#             */
/*   Updated: 2023/09/27 18:52:56 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include <stdlib.h>

class Contact
{
	public :
	
	Contact();
	~Contact();
	void setFirst_Name();
	void setLast_Name();
	void setNick_Name();
	void setPhone_Number();
	void setDarkest_Secret();
	void display_contact();
	void display_contact2(std::string str,int j);
	int display_informations();
	
	private :

	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	phone_number;
	std::string	darkest_secret;
};


#endif
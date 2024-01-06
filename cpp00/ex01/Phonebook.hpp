/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:21:40 by jsabound          #+#    #+#             */
/*   Updated: 2023/09/27 18:53:53 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iomanip>
# include <iostream>
# include <stdlib.h>

class Phonebook
{
  public:
	Phonebook();
	~Phonebook();
	void search();
	void add(int i);
	void choose_contact();

  private:
	Contact list[8];
};

void	display_menu(void);

#endif
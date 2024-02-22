/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:09:38 by jsabound          #+#    #+#             */
/*   Updated: 2024/01/17 13:54:27 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>

class Zombie
{
  public:
  
	Zombie();
	~Zombie();
	void anounce (void);
	void add_name(std::string name);

  private:
  
	std::string name;
};


void randomChump(std::string name);
Zombie* newZombie( std::string name );

#endif
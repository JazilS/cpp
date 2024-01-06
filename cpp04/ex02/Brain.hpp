/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:42:19 by jsabound          #+#    #+#             */
/*   Updated: 2023/10/21 18:25:13 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <cmath>
# include <cstdlib>
# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string.h>
# include <string>

class Brain
{
	public :

	Brain();
	Brain(const Brain &copie);
	~Brain();
	Brain& operator=(const Brain &copie);
	

	private :
	
	std::string ideas[100];
	
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:09:15 by jsabound          #+#    #+#             */
/*   Updated: 2023/10/01 16:39:07 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_HARL
#define DEF_HARL

# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>
# include <cstdlib>
# include <fstream>
# include <string.h>

class Harl
{
	public :

	Harl();
	~Harl();
	void complain(std::string level);
	
	private :
	
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

#endif
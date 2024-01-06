/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:15:34 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/05 16:36:48 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>
# include <cstdlib>
# include <fstream>
# include <string.h>

int main (int ac, char **av)
{
	size_t pos = 0;
	
	if (ac != 4 || !av[1] || !av[2] || !av[3])
	{
		std::cerr << "Invalid Argument !" << std::endl;
		return (3);
	}
	std::string file_name = av[1];
	std::ifstream infile((file_name).c_str());
	if (!infile)
	{
		std::cerr << "Invalid Infile : " << file_name << std::endl;
		return (1);
	}
	std::ofstream outfile((file_name + ".replace").c_str());
	if (!outfile)
	{
		std::cerr << "Invalid Outfile : " << file_name << std::endl;
		infile.close();
		return (1);
	}
	std::string str = "";
	std::string av2 = av[2];
	std::string av3 = av[3];
	if (av2.empty())
	{
		
		std::cerr << "String is empty" << std::endl;
		return (2);
	}
	while(std::getline(infile, str))
{
		pos = 0; 
		std::string newLine;

		while (pos < str.length())
		{
			size_t nextPos = str.find(av2, pos);

			if (nextPos != std::string::npos)
			{

				newLine += str.substr(pos, nextPos - pos);
				newLine += av3;
				pos = nextPos + av2.length();
			}
			else
			{
				newLine += str.substr(pos);
				break; 
			}
		}
		outfile << newLine << std::endl;
	}
	infile.close();
	outfile.close();
	return 0;
}
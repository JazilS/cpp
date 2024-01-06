/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:06:38 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/30 19:47:50 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat bureaucrate("Jean Dupont", 1);
		std::cout << bureaucrate;

		bureaucrate.upGrade();
		std::cout << "Grade incrémenté : " << bureaucrate << std::endl;

		bureaucrate.downGrade();
		std::cout << "Grade décrémenté : " << bureaucrate << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception : " << e.what() << std::endl;
	}

	return (0);
}
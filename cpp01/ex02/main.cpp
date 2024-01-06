/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:14:39 by jsabound          #+#    #+#             */
/*   Updated: 2023/09/28 18:21:14 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>

int main (void)
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string& stringREF = string;

    std::cout << "Adresse de string: " << &string << std::endl;
    std::cout << "Adresse pointee par stringPTR: " << stringPTR << std::endl;
    std::cout << "Adresse reference par stringREF: " << &stringREF << std::endl;

    std::cout << "La valeur de la string: " << string << std::endl;
    std::cout << "La valeur pointee par stringPTR: " << *stringPTR << std::endl;
    std::cout << "La valeur reference par stringREF: " << stringREF << std::endl;

    return 0;
}
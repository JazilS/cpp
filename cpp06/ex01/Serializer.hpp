/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:54:59 by jsabound          #+#    #+#             */
/*   Updated: 2023/12/02 21:36:47 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER
#define SERIALIZER

#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <cstdlib>
#include <string>
#include <stdint.h>

struct Data
{
	int value;
	std::string name;
	
	Data(int value) : value(value) , name("Jazil"){}
};

class Serializer
{
	public :

	~Serializer();
	Serializer &operator=(const Serializer &);
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);

	private :
	Serializer();
	Serializer(const Serializer &src);
};

#endif
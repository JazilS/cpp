/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:54:51 by jsabound          #+#    #+#             */
/*   Updated: 2023/11/22 18:37:34 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	
}

Serializer::Serializer(const Serializer &src)
{
	*this = src;
}

Serializer::~Serializer()
{
	
}

Serializer &Serializer::operator=(const Serializer &)
{
	return *this;
}

uintptr_t Serializer::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
	
}

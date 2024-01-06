/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:01:14 by jsabound          #+#    #+#             */
/*   Updated: 2023/12/10 19:11:03 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	public :
	
	Array(): array(NULL), arraySize(0) {};
	
	~Array() {
		delete[] array;
	}
	
	Array(unsigned int n): arraySize(n) {
		this->array = new T[this->arraySize];
	}

	Array(const Array &src): arraySize(src.arraySize){
		array = new T[arraySize];
	}
	
	Array &operator=(const Array &src)
	{
		if (this != &src)
		{
			if (this->array)
				delete[] this->array;
			arraySize = src.arraySize;
			array = new T[arraySize];
			for (unsigned int i = 0; i < arraySize; i++)
				array[i] = src.array[i];
		}
		return (*this);
	};
	
	T& operator[](unsigned int index){
		if (index >= arraySize || index < 0)
			throw std::out_of_range("Index hors limites");
		return (array[index]);
	};
	
	unsigned int size(){
		return arraySize;
	};

	private :
	
	T* array;
	unsigned int arraySize;
};

#endif
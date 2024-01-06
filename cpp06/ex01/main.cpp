/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:55:02 by jsabound          #+#    #+#             */
/*   Updated: 2023/12/02 21:38:16 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data originalData(42);
	uintptr_t serializedValue = Serializer::serialize(&originalData);
	Data *deserializedData = Serializer::deserialize(serializedValue);

	if (deserializedData == &originalData)
		std::cout << "La sérialisation et la désérialisation ont réussi. La valeur : " << deserializedData->value << " et le nom : " << deserializedData->name << std::endl;
	else
		std::cout << "Erreur : Les pointeurs ne sont pas égaux." << std::endl;
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:51:43 by jsabound          #+#    #+#             */
/*   Updated: 2023/10/21 15:11:05 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal
{
	public :

	WrongCat();
	WrongCat(const WrongCat &copie);
	WrongCat(const std::string &name);
	~WrongCat();
	WrongCat& operator=(const WrongCat &copie);
	void makeSound() const;
};

#endif
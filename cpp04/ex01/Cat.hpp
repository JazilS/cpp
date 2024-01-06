/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:51:43 by jsabound          #+#    #+#             */
/*   Updated: 2023/10/21 16:58:18 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public :

	Cat();
	Cat(const Cat &copie);
	Cat(const std::string &name);
	~Cat();
	Cat& operator=(const Cat &copie);
	void makeSound() const;

	private :

	Brain *brain;

};

#endif
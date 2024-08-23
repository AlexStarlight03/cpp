/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:45:37 by adube             #+#    #+#             */
/*   Updated: 2024/08/23 12:56:00 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>
#include <iostream>

class Cat : public Animal
{
	private:
		Brain *_brain;
	public:
		Cat ();
		Cat (const std::string name);
		Cat (const Cat &rhs);
		Cat &operator=(const Cat &rhs);
		~Cat();
};

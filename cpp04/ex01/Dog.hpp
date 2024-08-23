/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:45:37 by adube             #+#    #+#             */
/*   Updated: 2024/08/23 12:56:02 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>
#include <iostream>

class Dog : public Animal
{
	private:
		Brain *_brain;
	public:
		Dog ();
		Dog (const std::string name);
		Dog (const Dog &rhs);
		Dog &operator=(const Dog &rhs);
		~Dog();

};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:45:37 by adube             #+#    #+#             */
/*   Updated: 2024/08/15 11:56:49 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class WrongAnimal
{
protected:
	std::string _type;
	std::string _sound;
	
public:
	WrongAnimal ();
	WrongAnimal (const std::string name);
	WrongAnimal (const WrongAnimal &rhs);
	WrongAnimal &operator=(const WrongAnimal &rhs);
	~WrongAnimal();
	
	std::string getType() const;
	void makeSound() const;
};

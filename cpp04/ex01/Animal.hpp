/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:45:37 by adube             #+#    #+#             */
/*   Updated: 2024/08/23 13:12:33 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal : public Brain
{
protected:
	std::string _type;
	std::string _sound;
	
public:
	Animal ();
	Animal (const std::string name);
	Animal (const Animal &rhs);
	Animal &operator=(const Animal &rhs);
	~Animal();
	
	std::string getType() const;
	void makeSound() const;
};

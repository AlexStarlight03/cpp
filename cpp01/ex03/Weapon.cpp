/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:30:42 by adube             #+#    #+#             */
/*   Updated: 2024/04/16 14:04:54 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
	std::cout << "Weapon constructor has been called" << std::endl;
	setType(str);
}

Weapon::~Weapon()
{
	std::cout << "Weapon destructor has been called" << std::endl;
}

const std::string& Weapon::getType(void)
{
	return (this->_type);
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}

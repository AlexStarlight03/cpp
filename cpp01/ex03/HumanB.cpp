/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:31:53 by adube             #+#    #+#             */
/*   Updated: 2024/07/18 11:24:13 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	std::cout << "HumanB constructor has been called" << std::endl;
	this->_name = name;
}

HumanB::~HumanB()
{
	std::cout << "HumanB destructor has been called" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack(void) const
{
	if (!this->_weapon)
		std::cout << this->_name << " attacks with no weapon" << std::endl;
	else
		std::cout << this->_name << " attacks with " << this->_weapon->getType() << std::endl;
}
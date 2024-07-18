/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:31:56 by adube             #+#    #+#             */
/*   Updated: 2024/07/18 11:22:01 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	std::cout << "HumanA constructor has been called" << std::endl;
	this->_weapon = &weapon;
	this->_name = name;
}

HumanA::~HumanA()
{
	std::cout << "HumanA destructor has been called" << std::endl;
}

void	HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with " << this->_weapon->getType() << std::endl;
}
 
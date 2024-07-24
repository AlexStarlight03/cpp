/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:45:34 by adube             #+#    #+#             */
/*   Updated: 2024/07/24 11:01:18 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap (std::string name)
{
	std::cout << "Default constructor has been called" << std::endl;
	this->_name = name;
}

ClapTrap::ClapTrap (const ClapTrap &rhs)
{
	std::cout << "Copy constructor has been called" << std::endl;
	*this = rhs;
}

ClapTrap::ClapTrap &operator=(const ClapTrap &rhs)
{
	std::cout << "Copy assignment operator constructor has been called" << std::endl;
	this->_name = rhs._name;
	this->_EnergyPoint = rhs._EnergyPoint;
	this->_AttackDamage = rhs._AttackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor has been called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_EnergyPoint <= 0)
		std::cout << "ClapTrap is out of Ener"
	std::cout << "ClapTrap " << _name << "attacks " << target << "causing " << _AttackDamage "points of damage!" << std::endl;
	_EnergyPoint -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	
}

void ClapTrap::beRepaired(unsigned int amount)
{
	int newHit;
	
	newHit = getHitPoint() + amount;
	
}

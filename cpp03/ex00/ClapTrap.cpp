/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandrinedube <alexandrinedube@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:45:34 by adube             #+#    #+#             */
/*   Updated: 2024/07/24 19:33:38 by alexandrine      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap (std::string name)
{
	std::cout << "Default constructor has been called" << std::endl;
	this->_name = name;
	this->_HitPoint = 10;
	this->_EnergyPoint = 10;
	this->_AttackDamage = 0;
}

ClapTrap::ClapTrap (const ClapTrap &rhs)
{
	std::cout << "Copy constructor has been called" << std::endl;
	*this = rhs;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &rhs)
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
		std::cout << "ClapTrap is out of Energy";
	else if (_HitPoint <= 0)
		std::cout << "ClapTrap is out of Hit Points, it is dead :(" << std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << "attacks " << target;
		std::cout << "causing " << _AttackDamage << "points of damage!" << std::endl;
		this->_EnergyPoint--;
		std::cout << "ClapTrap now has " << this->_EnergyPoint << " energy point left" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_HitPoint <= 0)
		std::cout << "ClapTrap is out of Hit Points, it is dead :(" << std::endl;
	if (amount > this->_HitPoint)
		amount = this->_HitPoint;
	this->_HitPoint -= amount;
	std::cout << "ClapTrap is now at " << this->_HitPoint << "Hit Points out of 10" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_EnergyPoint <= 0)
		std::cout << "ClapTrap is out of Energy and cannot repair itself" << std::endl;
	if (_HitPoint <= 0)
		std::cout << "ClapTrap is out of Hit Points, it is dead :(" << std::endl;
	if (_HitPoint == 10)
		std::cout << "ClapTrap is already at full health" << std::endl;
	else
	{
		this->_HitPoint += amount;
		if (this->_HitPoint > 10)
			this->_HitPoint = 10;
		this->_EnergyPoint--;
		std::cout << "ClapTrap is now at " << this->_HitPoint << "Hit Points out of 10" << std::endl;
		std::cout << "ClapTrap now has " << this->_EnergyPoint << " energy point left" << std::endl;
	}
}

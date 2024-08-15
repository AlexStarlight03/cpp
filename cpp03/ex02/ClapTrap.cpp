/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:45:34 by adube             #+#    #+#             */
/*   Updated: 2024/08/15 10:06:50 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap ()
{
	std::cout << "ClapTrap Default constructor has been called" << std::endl;
	this->_name = "Clap";
	this->_HitPoint = 10;
	this->_EnergyPoint = 10;
	this->_AttackDamage = 0;
}

ClapTrap::ClapTrap (std::string name)
{
	std::cout << "ClapTrap Default constructor has been called" << std::endl;
	this->_name = name;
	this->_HitPoint = 10;
	this->_EnergyPoint = 10;
	this->_AttackDamage = 0;
}

ClapTrap::ClapTrap (const ClapTrap &rhs)
{
	std::cout << "ClapTrap Copy constructor has been called" << std::endl;
	*this = rhs;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "ClapTrap Copy assignment operator constructor has been called" << std::endl;
	this->_name = rhs._name;
	this->_EnergyPoint = rhs._EnergyPoint;
	this->_AttackDamage = rhs._AttackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor has been called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_EnergyPoint <= 0)
		std::cout << "ClapTrap " << _name << " is out of Energy" << std::endl;
	else if (_HitPoint <= 0)
		std::cout << "ClapTrap " << _name << " is out of HP, it is dead :(" << std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << " attacks " << target;
		std::cout << " causing " << _AttackDamage << " points of damage!" << std::endl;
		this->_EnergyPoint--;
		std::cout << "ClapTrap " << _name << " now has " << this->_EnergyPoint << " Energy Points left" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_HitPoint <= 0)
		std::cout << "ClapTrap " << _name << " is out of HP, it is dead :(" << std::endl;
	else
	{
		if (amount > this->_HitPoint)
			amount = this->_HitPoint;
		this->_HitPoint -= amount;
		std::cout << "ClapTrap " << _name << " got attacked for " << amount << " points, and is now at " << this->_HitPoint << " HP" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_HitPoint <= 0)
		std::cout << "ClapTrap " << _name << " is out of HP, it is dead :(" << std::endl;
	else if (_EnergyPoint <= 0)
		std::cout << "ClapTrap " << _name << " is out of Energy and cannot repair itself" << std::endl;
	else if (_HitPoint == 10)
		std::cout << "ClapTrap " << _name << " is already at full health" << std::endl;
	else
	{
		this->_HitPoint += amount;
		this->_EnergyPoint--;
		std::cout << "ClapTrap " << _name << " gained " << amount << " HP and is now at " << this->_HitPoint << " HP" << std::endl;
		std::cout << "ClapTrap " << _name << " now has " << this->_EnergyPoint << " energy point left" << std::endl;
	}
}

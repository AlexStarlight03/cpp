/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 10:34:34 by adube             #+#    #+#             */
/*   Updated: 2024/08/23 11:39:45 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Default constructor has been called" << std::endl;
	this->_name = "Clap";
	this->_HitPoint = 100;
	this->_EnergyPoint = 50;
	this->_AttackDamage = 20;
	this->_Mode = 0;
}


ScavTrap::ScavTrap (std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Default args constructor has been called" << std::endl;
	this->_name = name;
	this->_HitPoint = 100;
	this->_EnergyPoint = 50;
	this->_AttackDamage = 20;
	this->_Mode = 0;
}

ScavTrap::ScavTrap (const ScavTrap &rhs) : ClapTrap(rhs)
{
	std::cout << "ScavTrap Copy constructor has been called" << std::endl;
	*this = rhs;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &rhs) 
{
	std::cout << "ScavTrap Copy assignment operator constructor has been called" << std::endl;
	this->_name = rhs._name;
	this->_EnergyPoint = rhs._EnergyPoint;
	this->_AttackDamage = rhs._AttackDamage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor has been called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (_HitPoint <= 0)
		std::cout << "ScavTrap " << _name << " is out of HP, it is dead :(" << std::endl;
	else if (_EnergyPoint <= 0)
		std::cout << "ScavTrap " << _name << " is out of Energy" << std::endl;
	else if (_Mode != 0)
		std::cout << "ScavTrap " << _name << " is Gate Keeper Mode and cannot attack" << std::endl;
	else
	{
		std::cout << "ScavTrap " << _name << " attacks " << target;
		std::cout << " causing " << _AttackDamage << " points of damage!" << std::endl;
		this->_EnergyPoint--;
		std::cout << "ScavTrap " << _name << " now has " << this->_EnergyPoint << " Energy Points left" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	this->_Mode = 1;
	std::cout << "ScavTrap " << _name << " is now in Gate Keeper Mode" << std::endl;
}



/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 13:05:18 by adube             #+#    #+#             */
/*   Updated: 2024/08/14 13:12:44 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap Default constructor has been called" << std::endl;
	this->_name = "FragClap";
	this->_HitPoint = 100;
	this->_EnergyPoint = 100;
	this->_AttackDamage = 30;
}


FragTrap::FragTrap (std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap Default constructor has been called" << std::endl;
	this->_name = name;
	this->_HitPoint = 100;
	this->_EnergyPoint = 50;
	this->_AttackDamage = 20;
}

FragTrap::FragTrap (const FragTrap &rhs) : ClapTrap(rhs)
{
	std::cout << "FragTrap Copy constructor has been called" << std::endl;
	*this = rhs;
}

FragTrap& FragTrap::operator=(const FragTrap &rhs) 
{
	std::cout << "FragTrap Copy assignment operator constructor has been called" << std::endl;
	this->_name = rhs._name;
	this->_EnergyPoint = rhs._EnergyPoint;
	this->_AttackDamage = rhs._AttackDamage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor has been called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap wants to high five you! Yay!" << std::endl;
}

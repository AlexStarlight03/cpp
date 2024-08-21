/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:08:34 by adube             #+#    #+#             */
/*   Updated: 2024/08/15 11:57:29 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor has been called" << std::endl;
	this->_type = "WrongAnimal";
}


WrongAnimal::WrongAnimal (std::string name)
{
	std::cout << "WrongAnimal default constructor has been called" << std::endl;
	this->_type = name;
}

WrongAnimal::WrongAnimal (const WrongAnimal &rhs)
{
	std::cout << "WrongAnimal Copy constructor has been called" << std::endl;
	*this = rhs;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &rhs) 
{
	std::cout << "WrongAnimal Copy assignment operator constructor has been called" << std::endl;
	this->_type = rhs._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor has been called" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (_type);
}

void WrongAnimal::makeSound() const
{
	std::cout << _sound << std::endl;
}
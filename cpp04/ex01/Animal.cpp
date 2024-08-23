/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:08:34 by adube             #+#    #+#             */
/*   Updated: 2024/08/23 13:00:39 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor has been called" << std::endl;
	this->_type = "Animal";
}


Animal::Animal (std::string name)
{
	std::cout << "Animal default constructor has been called" << std::endl;
	this->_type = name;
}

Animal::Animal (const Animal &rhs)
{
	std::cout << "Animal Copy constructor has been called" << std::endl;
	*this = rhs;
}

Animal& Animal::operator=(const Animal &rhs) 
{
	std::cout << "Animal Copy assignment operator constructor has been called" << std::endl;
	this->_type = rhs._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor has been called" << std::endl;
}

std::string Animal::getType() const
{
	return (_type);
}

void Animal::makeSound() const
{
	std::cout << _sound << std::endl;
}
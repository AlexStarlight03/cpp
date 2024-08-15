/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:08:34 by adube             #+#    #+#             */
/*   Updated: 2024/08/15 11:40:56 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog default constructor has been called" << std::endl;
	this->_type = "Dog";
	this->_sound = "BArk bark bark";
}


Dog::Dog (std::string name) : Animal(name)
{
	std::cout << "Dog name default constructor has been called" << std::endl;
	this->_type = name;
	this->_sound = "BARKK BARKK BARKK";
}

Dog::Dog (const Dog &rhs) : Animal(rhs)
{
	std::cout << "Dog copy constructor has been called" << std::endl;
	*this = rhs;
}

Dog& Dog::operator=(const Dog &rhs) 
{
	std::cout << "Dog Copy assignment operator constructor has been called" << std::endl;
	this->_type = rhs._type;
	this->_sound = rhs._sound;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor has been called" << std::endl;
}
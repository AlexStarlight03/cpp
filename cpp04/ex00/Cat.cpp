/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:08:34 by adube             #+#    #+#             */
/*   Updated: 2024/08/15 11:41:14 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor has been called" << std::endl;
	this->_type = "Cat";
	this->_sound = "Meowwwww";
}


Cat::Cat (std::string name) : Animal(name)
{
	std::cout << "Cat name default constructor has been called" << std::endl;
	this->_type = name;
	this->_sound = "MEOOOWWWW";
}

Cat::Cat (const Cat &rhs) : Animal(rhs)
{
	std::cout << "Cat Copy constructor has been called" << std::endl;
	*this = rhs;
}

Cat& Cat::operator=(const Cat &rhs) 
{
	std::cout << "Cat Copy assignment operator constructor has been called" << std::endl;
	this->_type = rhs._type;
	this->_sound = rhs._sound;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor has been called" << std::endl;
}
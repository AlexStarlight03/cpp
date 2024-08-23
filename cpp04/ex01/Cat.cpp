/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:08:34 by adube             #+#    #+#             */
/*   Updated: 2024/08/23 12:56:57 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor has been called" << std::endl;
	this->_type = "Cat";
	this->_sound = "Meowwwww";
	this->_brain = new Brain;
}


Cat::Cat (std::string name) : Animal(name)
{
	std::cout << "Cat name default constructor has been called" << std::endl;
	this->_type = name;
	this->_sound = "MEOOOWWWW";
	this->_brain = new Brain;
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
	delete this->_brain;
	this->_brain = new Brain(*(rhs._brain));
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor has been called" << std::endl;
	delete this->_brain;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:08:34 by adube             #+#    #+#             */
/*   Updated: 2024/08/23 12:56:05 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat default constructor has been called" << std::endl;
	this->_type = "WrongCat";
	this->_sound = "IUBouaf i am cat YES";
}


WrongCat::WrongCat (std::string name) : WrongAnimal(name)
{
	std::cout << "WrongCat name default constructor has been called" << std::endl;
	this->_type = name;
	this->_sound = "AAAAAAAAAAA CAT";
}

WrongCat::WrongCat (const WrongCat &rhs) : WrongAnimal(rhs)
{
	std::cout << "WrongCat Copy constructor has been called" << std::endl;
	*this = rhs;
}

WrongCat& WrongCat::operator=(const WrongCat &rhs) 
{
	std::cout << "WrongCat Copy assignment operator constructor has been called" << std::endl;
	this->_type = rhs._type;
	this->_sound = rhs._sound;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor has been called" << std::endl;
}
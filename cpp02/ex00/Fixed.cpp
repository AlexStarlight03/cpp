/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 09:36:22 by adube             #+#    #+#             */
/*   Updated: 2024/04/30 12:54:18 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor has been called" << std::endl;
	this->_fixedPoint = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor has been called" << std::endl;
}

Fixed::Fixed(const	Fixed & rhs)
{
	std::cout << "Copy constructor has been called" << std::endl;
	this->setRawBits(rhs.getRawBits());
		
}

Fixed& Fixed::operator=(const	Fixed & rhs)
{
	std::cout << "Copy assignment operator has been called" << std::endl;
	if (this != &rhs)
		this->_fixedPoint = rhs.getRawBits();
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits function has been called" << std::endl;
	return (this->_fixedPoint);
	
}
void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits function has been called" << std::endl;
	this->_fixedPoint = raw;
}

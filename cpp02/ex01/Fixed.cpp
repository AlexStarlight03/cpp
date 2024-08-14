/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 09:36:22 by adube             #+#    #+#             */
/*   Updated: 2024/08/14 10:24:29 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor has been called" << std::endl;
	this->_fixedPoint = 0;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor has been called" << std::endl;
	this->_fixedPoint = num << this->_fractionalBits;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor has been called" << std::endl;
	this->_fixedPoint = roundf(num * (1 << this->_fractionalBits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor has been called" << std::endl;
}

Fixed::Fixed(const Fixed &rhs)
{
	std::cout << "Copy constructor has been called" << std::endl;
	*this = rhs;
		
}

Fixed& Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator constructor has been called" << std::endl;
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

float Fixed::toFloat( void ) const
{
	return ((float)this->_fixedPoint / (float)(1 << this->_fractionalBits));
}

int Fixed::toInt( void ) const
{
	return (this->_fixedPoint >> this->_fractionalBits);
}

std::ostream &operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}

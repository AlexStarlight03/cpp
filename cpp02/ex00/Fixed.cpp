/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 09:36:22 by adube             #+#    #+#             */
/*   Updated: 2024/08/21 10:16:34 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor has been called" << std::endl;
	this->_fixedPoint = 0;
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
	std::cout << "Copy assignment operator has been called" << std::endl;
	if (this != &rhs)
		this->_fixedPoint = rhs.getRawBits();
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function has been called" << std::endl;
	return (this->_fixedPoint);
	
}
void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function has been called" << std::endl;
	this->_fixedPoint = raw;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 09:36:30 by adube             #+#    #+#             */
/*   Updated: 2024/08/14 10:24:39 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include  <cmath>

class Fixed
{
private:
	int	_fixedPoint;
	static const int _fractionalBits;
	
public:
	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	Fixed(const	Fixed & rhs);
	Fixed& operator=(const	Fixed & rhs);
	~Fixed();

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &o, Fixed const &fixed);

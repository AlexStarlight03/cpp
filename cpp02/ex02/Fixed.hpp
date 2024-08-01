/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 09:36:30 by adube             #+#    #+#             */
/*   Updated: 2024/08/01 15:24:33 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include  <cmath>

class Fixed
{
private:
	int	_fixedPoint;
	static const int _fractionalBits = 8;
	
public:
	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	Fixed(const	Fixed & rhs);
	Fixed &operator=(const	Fixed & rhs);
	~Fixed();

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;

	int	operator>(Fixed nb)const;
	int	operator<(Fixed nb)const;
	int	operator>=(Fixed nb)const;
	int	operator<=(Fixed nb)const;
	int	operator==(Fixed nb)const;
	int	operator!=(Fixed nb)const;

	int	operator+(Fixed nb)const;
	int	operator-(Fixed nb)const;
	int	operator*(Fixed nb)const;
	int	operator/(Fixed nb)const;

	Fixed operator++();
	Fixed operator--();
	Fixed operator++(int);
	Fixed operator--(int);

	static Fixed &min(Fixed &one, Fixed &two);
	static const Fixed &min(const Fixed &one, const Fixed &two);
	static Fixed &max(Fixed &one, Fixed &two);
	static const Fixed &max(const Fixed &one, const Fixed &two);
};

std::ostream &operator<<(std::ostream &o, Fixed const &fixed);

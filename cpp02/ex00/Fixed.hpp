/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 09:36:30 by adube             #+#    #+#             */
/*   Updated: 2024/08/14 10:24:47 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Fixed
{
private:
	int	_fixedPoint;
	static const int _fractionalBits;
	
public:
	Fixed();
	Fixed(const	Fixed & rhs);
	Fixed& operator=(const	Fixed & rhs);
	~Fixed();

	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

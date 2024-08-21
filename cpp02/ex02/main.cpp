/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 09:36:40 by adube             #+#    #+#             */
/*   Updated: 2024/08/21 11:27:05 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include  <cmath>

int main( void ) 
{
	Fixed		a;
	Fixed		b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << std::endl;

	std::cout << a + b << std::endl;
	std::cout << b - a << std::endl;
	std::cout << std::endl;

	std::cout << (b > a) << std::endl;
	std::cout << (b < a) << std::endl;
	std::cout << std::endl;
	
	std::cout << b << std::endl;
	std::cout << --b << std::endl;
	std::cout << b << std::endl;
	std::cout << b-- << std::endl;
	std::cout << b << std::endl;
	std::cout << std::endl;
	
	std::cout << (b <= a) << std::endl;
	std::cout << (b >= a) << std::endl;
	std::cout << (b == a) << std::endl;
	std::cout << (b != a) << std::endl;
	std::cout << std::endl;
	
	std::cout << b << std::endl;
	std::cout << a << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	
	return 0;
}
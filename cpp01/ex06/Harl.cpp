/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:51:53 by adube             #+#    #+#             */
/*   Updated: 2024/07/24 11:48:29 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Harl constructor has been called" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl destructor has been called" << std::endl;
}

void Harl::_debug( void )
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. \
I really do!" << std::endl;
}
void Harl::_info( void )
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! \
If you did, I wouldn't be asking for more!" << std::endl;
}
void Harl::_warning( void )
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for \
years whereas you started working here since last month." << std::endl;
}
void Harl::_error( void )
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complainFilter( std::string level, int filter )
{
	void	(Harl::*ptr_complain[4])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	std::string	type[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int block = 0;

	switch (filter)
	{
		case 1:
			break ;
		case 2:
			block = 1;
			break ;
		case 3:
			block = 2;
			break ;
		case 4:
			block = 3;
			break ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (i >= block)
		{
			if (type[i] == level)
			{
				(this->*ptr_complain[i])();
				break ;
			}
		}
		else if (type[i] == level)
			std::cout << "[Some useless complains]" << std::endl;
	}
}

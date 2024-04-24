/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:51:49 by adube             #+#    #+#             */
/*   Updated: 2024/04/24 15:45:10 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#pragma once

class Harl
{
private:
	void _debug( void );
	void _info( void );
	void _warning( void );
	void _error( void );
public:
	Harl(/* args */);
	~Harl();
	
	void complainFilter( std::string level, int filter );
};

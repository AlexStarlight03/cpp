/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:29:18 by adube             #+#    #+#             */
/*   Updated: 2024/04/16 11:07:37 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Zombie
{
private:
    std::string _name;
public:
    Zombie();
    ~Zombie();

	void		setName(std::string _name);
	std::string	getName(void);
    void		announce( void );
};

    Zombie*	newZombie( std::string name );
    void	randomChump( std::string name );

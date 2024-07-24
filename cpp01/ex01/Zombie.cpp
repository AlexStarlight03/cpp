/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:34:00 by adube             #+#    #+#             */
/*   Updated: 2024/07/24 11:42:06 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::setName(std::string name)
{
    this->_name = name;
}

std::string	Zombie::getName(void)
{
    return (this->_name);
}

void	Zombie::announce( void )
{
    std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(void){}

Zombie::~Zombie()
{
    std::cout <<  this->getName() << " died." << std::endl;
}
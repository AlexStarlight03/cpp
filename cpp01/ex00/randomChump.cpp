/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:00:40 by adube             #+#    #+#             */
/*   Updated: 2024/04/16 11:09:03 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump( std::string name )
{
    Zombie new_zombie;

    new_zombie.setName(name);
    new_zombie.announce();
}
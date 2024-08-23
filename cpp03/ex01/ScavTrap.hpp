/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 10:34:29 by adube             #+#    #+#             */
/*   Updated: 2024/08/23 09:27:46 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once 

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap (const std::string name);
		ScavTrap (const ScavTrap &rhs);
		ScavTrap &operator=(const ScavTrap & rhs);
		~ScavTrap();

		void attack(const std::string& target);
		void guardGate();
};

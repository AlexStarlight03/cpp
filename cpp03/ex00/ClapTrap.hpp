/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:45:37 by adube             #+#    #+#             */
/*   Updated: 2024/08/14 11:21:38 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class ClapTrap
{
private:
	std::string _name;
	unsigned int	_HitPoint;
	unsigned int	_EnergyPoint;
	unsigned int	_AttackDamage;
	
public:
	ClapTrap ();
	ClapTrap (std::string name);
	ClapTrap (const ClapTrap &rhs);
	ClapTrap &operator=(const ClapTrap &rhs);
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};

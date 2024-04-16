/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:23:43 by adube             #+#    #+#             */
/*   Updated: 2024/04/16 14:03:31 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
	Weapon* _weapon;
public:
	HumanB(std::string name);
	~HumanB();
	void	attack(void)const;
	void	setWeapon(Weapon& weapon);
	
};


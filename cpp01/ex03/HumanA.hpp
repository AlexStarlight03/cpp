/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:19:06 by adube             #+#    #+#             */
/*   Updated: 2024/07/24 11:43:28 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
	Weapon* _weapon;
	std::string _name;
	
public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	
	void	attack(void)const;
};


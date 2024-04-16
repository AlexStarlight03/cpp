/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:14:38 by adube             #+#    #+#             */
/*   Updated: 2024/04/16 14:03:37 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Weapon
{
private:
	std::string	_type;
public:
	Weapon(std::string str);
	~Weapon();
	const std::string& getType(void);
	void setType(std::string type);
};

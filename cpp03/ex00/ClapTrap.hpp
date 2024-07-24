/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:45:37 by adube             #+#    #+#             */
/*   Updated: 2024/07/24 10:17:22 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class ClapTrap
{
private:
	std::string _name;
	int	_HitPoint = 10;
	int	_EnergyPoint = 10;
	int	_AttackDamage = 0;
	
public:
	ClapTrap (std::string name);
	ClapTrap (const ClapTrap &rhs);
	ClapTrap &operator=(const ClapTrap &rhs);
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};

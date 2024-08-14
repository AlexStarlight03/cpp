/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 13:05:16 by adube             #+#    #+#             */
/*   Updated: 2024/08/14 13:08:14 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once 

#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap (const std::string name);
		FragTrap (const FragTrap &rhs);
		FragTrap &operator=(const FragTrap & rhs);
		~FragTrap();

		void highFivesGuys(void);
};

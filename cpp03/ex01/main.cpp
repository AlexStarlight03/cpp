/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:45:40 by adube             #+#    #+#             */
/*   Updated: 2024/08/23 09:29:23 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

    #include "ClapTrap.hpp"
    #include "ScavTrap.hpp"


int	main(void)
{
    ClapTrap One("One");
    ScavTrap Two("Two");
    
    One.takeDamage(5);
    One.attack("badGuy");
    One.beRepaired(10);
    One.takeDamage(10);
    One.takeDamage(5);
    One.takeDamage(5);
    One.attack("badGuy");
    One.beRepaired(10);

    Two.attack("a bug");
    Two.beRepaired(10);
    Two.attack("another bug");
    Two.attack("another bug");
    Two.attack("another bug");
    Two.attack("another bug");
    Two.attack("another bug");
    Two.guardGate();
    Two.attack("another bug");
    Two.attack("another bug");
    Two.attack("another bug");
    Two.attack("another bug");
    Two.beRepaired(10);
    Two.takeDamage(10);

}
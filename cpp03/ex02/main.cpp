/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:45:40 by adube             #+#    #+#             */
/*   Updated: 2024/08/14 13:16:23 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

    #include "ClapTrap.hpp"
    #include "ScavTrap.hpp"
    #include "FragTrap.hpp"


int	main(void)
{
    ClapTrap One("One");
    ScavTrap O("O");
    FragTrap Two("Two");
    
    One.takeDamage(5);
    One.attack("badGuy");
    One.beRepaired(10);
    One.takeDamage(10);
    One.takeDamage(5);
    One.takeDamage(5);
    One.attack("badGuy");
    One.beRepaired(10);

    O.takeDamage(5);
    O.attack("badGuy");
    O.beRepaired(10);
    O.takeDamage(10);
    O.takeDamage(5);
    O.takeDamage(5);
    O.attack("badGuy");
    O.beRepaired(10);
    O.guardGate();
    O.attack("badGuy");
    O.takeDamage(5);

    Two.attack("a bug");
    Two.beRepaired(10);
    Two.attack("another bug");
    Two.attack("another bug");
    Two.attack("another bug");
    Two.attack("another bug");
    Two.attack("another bug");
    Two.attack("another bug");
    Two.attack("another bug");
    Two.attack("another bug");
    Two.attack("another bug");
    Two.beRepaired(10);
    Two.takeDamage(10);
    Two.highFivesGuys();

}
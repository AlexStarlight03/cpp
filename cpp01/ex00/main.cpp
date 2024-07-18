/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:21:13 by adube             #+#    #+#             */
/*   Updated: 2024/07/18 11:00:40 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::string input;

    std::cout << "Name the random zombie: ";
    std::cin >> input;
    std::cout << std::endl;
    randomChump(input);

    std::cout << "Name the important zombie: ";
    std::cin >> input;
    std::cout << std::endl;
    Zombie *new_zombie = newZombie(input);
	delete new_zombie;
	return (0);
}
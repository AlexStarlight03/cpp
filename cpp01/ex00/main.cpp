/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:21:13 by adube             #+#    #+#             */
/*   Updated: 2024/07/24 12:11:39 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::string input;

    std::cout << "Name the random zombie: ";
    getline(std::cin, input);
    randomChump(input);

    std::cout << "Name the important zombie: ";
    getline(std::cin, input);
    Zombie *new_zombie = newZombie(input);
	delete new_zombie;
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:21:13 by adube             #+#    #+#             */
/*   Updated: 2024/07/24 12:12:55 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int nb;
    std::string input;

    std::cout << "How many zombies do you want in your horde: ";
    std::cin >> nb;
    if (std::cin.fail())
	{
        std::cout << "Try again later by entering a valid number of zombies " << std::endl;
		return (0);
	}
    std::cin.ignore();
    std::cout << "Name the zombies: ";
    getline(std::cin, input);
    Zombie *horde = zombieHorde(nb, input);
    for (int i = 0; i < nb; i++)
        horde[i].announce();
	delete [] horde;
	return (0);
}
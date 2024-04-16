/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:19:48 by adube             #+#    #+#             */
/*   Updated: 2024/04/15 13:50:50 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
    PhoneBook   phonebook;
    std::string command;
    std::cout << "What do you want to do? ADD, SEARCH or EXIT" << std::endl;
    while (1)
    {
        std::cout << "Command : ";
        std::cin >> command;
        if (command == "EXIT")
            break;
        else if (command == "SEARCH")
            phonebook.searching();
        else if (command == "ADD")
            phonebook.adding();
    }
    std::cout << "*****\nGoodbye friend!\n*****" << std::endl;
}
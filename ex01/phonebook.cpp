/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:43:07 by adube             #+#    #+#             */
/*   Updated: 2024/04/15 14:59:04 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(void) 
{
    this->_num = 0;
}

PhoneBook::~PhoneBook(void) {}

void    PhoneBook::_showcontacts(void)
{
    Contact contact;
    int     i;

    i = 0;
    std::cout << std::setfill(' ') << "|" << std::setw(10) << "index" \
            << "|" << std::setw(10) << "first name" \
			<< "|" << std::setw(10) << "last name" \
			<< "|" << std::setw(10) << "nickname" \
			<< "|" << std::endl;
    while (i++ < 8)
    {
        contact = this->_contacts[i];
        if (contact.get_firstname().empty())
		{
			if (i == 0) 
                std::cout << "You currently have no friends :(" << std::endl;
			break ;
		}
        
    }
}

void    PhoneBook::_addcontact(Contact contact)
{
    if (this->_num >= 8)
        this->_num = 0;
    this->_contacts[this->_num++] = contact;
}

void    PhoneBook::adding(void)
{
    Contact contact;
    std::string info;
    
    std::cout << "Enter the first name : ";
    std::cin >> info;
    contact.make_firstname(info);
    std::cout << "Enter the last name : ";
    std::cin >> info;
    contact.make_lastname(info);
    std::cout << "Enter the nickname : ";
    std::cin >> info;
    contact.make_nickname(info);
    std::cout << "Enter the phone number : ";
    std::cin >> info;
    contact.make_phonenumber(info);
    std::cout << "Enter the darkest secret : ";
    std::cin >> info;
    contact.make_darkestsecret(info);
    std::cout << "Your new contact has been added! " << std::endl;
    _addcontact(contact);
}

void    PhoneBook::searching(void)
{
    int id;

    //add a function to prints current contacts ID, first name, last name and nickname with limmit of 10 characters
    
    std::cout << "What ID are you looking for? ";
    std::cin >> id;
    //need to fix when your enter something thats not a digit
    if (std::isdigit(id) != 0)
    {
        std::cout << "This ID is not valid, sorry :(" << std::endl;
        return ;
    }   
    if (std::isdigit(id) == 0 && id > 0 && id < 9)
    {
            if (this->_contacts[id - 1].get_firstname().empty())
                std::cout << "This ID is empty, sorry :(" << std::endl;
            else
                this->_contacts[id - 1].printinfo();
        }
    else 
        std::cout << "This ID is not valid, sorry :(" << std::endl;
}
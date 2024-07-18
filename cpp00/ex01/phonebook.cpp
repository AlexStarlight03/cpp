/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:43:07 by adube             #+#    #+#             */
/*   Updated: 2024/07/18 10:47:29 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(void) 
{
    this->_num = 0;
}

PhoneBook::~PhoneBook(void) {}

std::string	PhoneBook::_limitsize(std::string str)
{
	if (str.size() > 10)
	{
		str.resize(10);
		str[str.size() - 1] = '.';
	}
	return (str);
}

void    PhoneBook::_showcontacts(void)
{
    Contact contact;
    int     i;

    std::cout << std::setfill(' ') << "|" << std::setw(10) << "index" \
            << "|" << std::setw(10) << "first name" \
			<< "|" << std::setw(10) << "last name" \
			<< "|" << std::setw(10) << "nickname" \
			<< "|" << std::endl;
    i = 0;
    while (i < 8)
    {
        contact = this->_contacts[i];
        if (contact.get_firstname().empty())
		{
			if (i == 0) 
                std::cout << "You currently have no friends :(" << std::endl;
			break ;
		}
        else
        {
			std::cout << std::setfill(' ') << "|" << std::setw(10) << i + 1 \
            << "|" << std::setw(10) << _limitsize(contact.get_firstname()) \
			<< "|" << std::setw(10) << _limitsize(contact.get_lastname()) \
			<< "|" << std::setw(10) << _limitsize(contact.get_nickname())\
			<< "|" << std::endl;
        }
        i++;
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
	std::string str;

    _showcontacts();
    std::cout << "What ID are you looking for? ";
    std::cin >> str;
	id = atoi(str.c_str());
	if (std::cin.fail() || id < 1 || id > 8 || str.length() > 1)
		std::cout << "This ID is not valid, sorry :(" << std::endl;
	else
    {
        if (this->_contacts[id - 1].get_firstname().empty())
			std::cout << "This ID is empty, sorry :(" << std::endl;
		else
			this->_contacts[id - 1].printinfo();
	}	
}
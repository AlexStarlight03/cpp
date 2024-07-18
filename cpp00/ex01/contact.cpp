/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:07:31 by adube             #+#    #+#             */
/*   Updated: 2024/07/18 10:37:52 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"


Contact::Contact(void) {}

Contact::~Contact(void) {}

std::string   Contact::get_firstname(void)
{
    return (this->_firstname);
}

std::string    Contact::get_lastname(void)
{
    return (this->_lastname);
}

std::string    Contact::get_nickname(void)
{
    return (this->_nickname);
}

std::string    Contact::get_phonenumber(void)
{
    return (this->_phonenumber);
}

std::string   Contact::get_darkestsecret(void)
{
    return (this->_darkestsecret);
}

void    Contact::make_firstname(std::string _firstname)
{
    this->_firstname = _firstname;
}

void    Contact::make_lastname(std::string _lastname)
{
    this->_lastname = _lastname;
}

void    Contact::make_nickname(std::string _nickname)
{
    this->_nickname = _nickname;
}

void    Contact::make_phonenumber(std::string _phonenumber)
{
    this->_phonenumber = _phonenumber;
}

void    Contact::make_darkestsecret(std::string _darkestsecret)
{
    this->_darkestsecret = _darkestsecret;
}

void    Contact::printinfo(void)
{
    std::cout << "First name : " << this->_firstname << std::endl;
    std::cout << "Last name : " << this->_lastname << std::endl;
    std::cout << "Nickname : " << this->_nickname << std::endl;
    std::cout << "Phone number : " << this->_phonenumber << std::endl;
    std::cout << "Darkest secret : " << this->_darkestsecret << std::endl;
}

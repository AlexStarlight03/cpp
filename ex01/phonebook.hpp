/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:43:03 by adube             #+#    #+#             */
/*   Updated: 2024/04/16 09:35:24 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
# include <sstream>
# include <iomanip>
#include <iostream>
#include <limits>

class PhoneBook
{
private:
    Contact _contacts[8];
    int     _num;
    void    _addcontact(Contact contact);
    void    _showcontacts(void);
    std::string	_limitsize(std::string str);
    
public:
    PhoneBook();
    ~PhoneBook();
    void    adding(void);
    void    searching(void);
};

#endif
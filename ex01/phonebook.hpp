/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:43:03 by adube             #+#    #+#             */
/*   Updated: 2024/04/15 14:52:06 by adube            ###   ########.fr       */
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

public:
    PhoneBook();
    ~PhoneBook();
    void    adding(void);
    void    searching(void);
};

#endif
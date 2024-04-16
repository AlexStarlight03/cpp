/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:02:08 by adube             #+#    #+#             */
/*   Updated: 2024/04/15 14:11:54 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <cstring>

class Contact
{
private:
    std::string _firstname;
    std::string _lastname;
    std::string _nickname;
    std::string _phonenumber;
    std::string _darkestsecret;
public:
    Contact();
    ~Contact();
    void    make_firstname(std::string _firstname);
    void    make_lastname(std::string _lastname);
    void    make_nickname(std::string _nickname);
    void    make_phonenumber(std::string _phonenumber);
    void    make_darkestsecret(std::string _darkestsecret);

    std::string     get_firstname(void);
    std::string     get_lastname(void);
    std::string     get_nickname(void);
    std::string     get_phonenumber(void);
    std::string     get_darkestsecret(void);

    void            printinfo(void);
};

#endif
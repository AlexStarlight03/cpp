/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:57:06 by adube             #+#    #+#             */
/*   Updated: 2024/04/16 12:26:19 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Address of string : " << &str << std::endl;
	std::cout << "Address of stringPTR : " << stringPTR << std::endl;
	std::cout << "Address of stringREF : " << &stringREF << std::endl;
	std::cout <<  std::endl;
	std::cout << "value of string : " << str << std::endl;
	std::cout << "value of stringPTR : " << *stringPTR << std::endl;
	std::cout << "value of stringREF : " << stringREF << std::endl;

	return (0);
	}
	
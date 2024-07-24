/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:57:06 by adube             #+#    #+#             */
/*   Updated: 2024/07/24 11:42:17 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Memory address of string : " << &str << std::endl;
	std::cout << "Memory address of stringPTR : " << stringPTR << std::endl;
	std::cout << "Memory address of stringREF : " << &stringREF << std::endl;
	std::cout <<  std::endl;
	std::cout << "Value of string : " << str << std::endl;
	std::cout << "Value of stringPTR : " << *stringPTR << std::endl;
	std::cout << "Value of stringREF : " << stringREF << std::endl;

	return (0);
	}
	
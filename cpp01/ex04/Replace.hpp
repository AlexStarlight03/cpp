/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:39:39 by adube             #+#    #+#             */
/*   Updated: 2024/04/16 14:42:36 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <string>

class Replace
{
public:
	Replace();
	~Replace();
	
	std::string	ft_replace(std::string content, std::string strold, std::string strnew);
};



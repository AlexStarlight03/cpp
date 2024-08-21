/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:38:40 by adube             #+#    #+#             */
/*   Updated: 2024/08/21 10:57:54 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Brain
{
private:
	std::string _ideas[100];
	
public:
	Brain ();
	Brain (const Brain &rhs);
	Brain &operator=(const Brain &rhs);
	~Brain();

	void setIdeas(std::string const &ideas, int const index);
	std::string &getIdeas(int const index) const;
};

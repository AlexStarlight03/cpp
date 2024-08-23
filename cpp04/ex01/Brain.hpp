/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:38:40 by adube             #+#    #+#             */
/*   Updated: 2024/08/23 13:11:48 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Brain
{
protected:
	std::string _ideas[100];
	
public:
	Brain ();
	Brain (const Brain &rhs);
	Brain &operator=(const Brain &rhs);
	~Brain();

	void setIdeas(std::string ideas, unsigned int index);
	std::string const &getIdeas(unsigned int index) const;
	Brain* copyBrain( void );
};

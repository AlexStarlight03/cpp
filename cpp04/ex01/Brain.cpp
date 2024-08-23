/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:38:33 by adube             #+#    #+#             */
/*   Updated: 2024/08/23 13:16:40 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor has been called" << std::endl;
}

Brain::Brain (const Brain &rhs)
{
	std::cout << "Brain Copy constructor has been called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];
}

Brain& Brain::operator=(const Brain &rhs) 
{
	std::cout << "Brain Copy assignment operator constructor has been called" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor has been called" << std::endl;
	for (int i = 0; i < 100; i++)
			delete _ideas[i];
}

void Brain::setIdeas(std::string ideas, unsigned int index) 
{ 
	if (index < 100)
		this-> _ideas[index] = ideas; 
	else
		std::cout << "Index out of range. Cannot set idea!" << std::endl;
}

std::string const &Brain::getIdeas(unsigned int index) const 
{ 
	if (index < 100)
		return this->_ideas[index];
	else
		std::cout << "Index out of range. No idea here!" << std::endl;
}



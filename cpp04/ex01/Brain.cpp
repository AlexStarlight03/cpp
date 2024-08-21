/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:38:33 by adube             #+#    #+#             */
/*   Updated: 2024/08/21 10:58:47 by adube            ###   ########.fr       */
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
	*this = rhs;
}

Brain& Brain::operator=(const Brain &rhs) 
{
	std::cout << "Brain Copy assignment operator constructor has been called" << std::endl;
	*this->_ideas = *rhs._ideas;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor has been called" << std::endl;
}

void Brain::setIdeas(std::string const &ideas, int const index)
{
	
}

std::string &Brain::getIdeas(int const index) const
{
	
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:45:37 by adube             #+#    #+#             */
/*   Updated: 2024/08/23 12:56:06 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"
#include "Brain.hpp"
#include <string>
#include <iostream>

class WrongCat : public WrongAnimal
{
	private:
		Brain *_brain;
	public:
		WrongCat ();
		WrongCat (const std::string name);
		WrongCat (const WrongCat &rhs);
		WrongCat &operator=(const WrongCat &rhs);
		~WrongCat();
};

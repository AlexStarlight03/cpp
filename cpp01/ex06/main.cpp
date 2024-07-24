/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:51:09 by adube             #+#    #+#             */
/*   Updated: 2024/07/24 11:55:29 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl harl;
	int lev_filter = 0;
	std::string	type[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	if (argc != 2)
		return (1);
	for (int i = 0; i < 4; i++)
	{
		if (argv[1] == type[i])
		{
			lev_filter = i + 1;
			break ;
		}
	}
	harl.complainFilter("DEBUG", lev_filter);
	harl.complainFilter("WARNING", lev_filter);
	harl.complainFilter("ERROR", lev_filter);
	harl.complainFilter("INFO", lev_filter);
	harl.complainFilter("WARNING", lev_filter);
	harl.complainFilter("ERROR", lev_filter);
	harl.complainFilter("DEBUG", lev_filter);
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:27:01 by adube             #+#    #+#             */
/*   Updated: 2024/04/15 11:37:22 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
        {
            for (int i = 1; argv[i]; i++)
            {
                std::string str = argv[i];
                for (int index = 0; argv[i][index]; index++)
                {
                    std::cout << (char) toupper(str[index]);
                }
                if (i < argc)
                     std::cout << ' ';
            }
            std::cout << std::endl;
        }
    return 0;
}
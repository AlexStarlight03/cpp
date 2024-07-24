/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:13:04 by adube             #+#    #+#             */
/*   Updated: 2024/07/18 12:13:25 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#define ARGS 0
#define INFILE 1

int	printError(int err)
{
	if (err == ARGS)
		std::cerr << "Wrong number of arguments. Please enter Filename, string1 and string2." << std::endl;
	if (err == INFILE)
		std::cerr << "ERROR: Cannot open infile" << std::endl;
	return (1);
}

int	replaceStr(std::string oldFile, std::string oldStr, std::string newStr)
{
	std::ifstream	fileIn(oldFile);
	std::string		buf;
	std::string		text;
	size_t			search_i;

	if (fileIn.is_open())
	{
		std::ofstream	fileOut(oldFile + ".replace");
		while (getline(fileIn, buf))
		{
			text += buf;
			if (!fileIn.eof())
				text += '\n';
		}
		search_i = text.find(oldStr);		
		while (search_i < text.length())
		{
			text.erase(search_i, oldStr.length());
			text.insert(search_i, newStr);
			search_i = text.find(oldStr, search_i + newStr.length());
		}
		fileOut << text;
		fileOut.close();
		fileIn.close();
	}
	else
		return (printError(INFILE));
	return 0;
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (printError(ARGS));
	else
		return (replaceStr(argv[1], argv[2], argv[3]));
}
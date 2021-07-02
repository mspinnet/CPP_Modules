/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 12:12:14 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/19 14:07:03 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int		main(int argc, char **argv)
{
	std::string		s1;
	std::string		s2;
	std::string		str;

	if (argc != 4)
	{
		std::cout << "Erorr argument!!!" << std::endl;
		return (0);
	}
	std::ifstream f_read(argv[1]);
	s1 = argv[2];
	s2 = argv[3];
	if (s1.compare("\0") == 0 || s2.compare("\0") == 0)
	{
		std::cout << "One of strings are empty!!!" << std::endl;
		return (0);
	}
	if (!f_read)
	{
		std::cout << "File " << (std::string)argv[1] << " couldn't be opened!!!" << std::endl;
		return (0);
	}
	std::string	file_name = argv[1];
	file_name.append(".replace", 8);
	std::ofstream	outfile(file_name);
	std::size_t		found = 0;
	if (!outfile)
	{
		std::cout << "File " << file_name << " couldn't be opened!!!" << std::endl;
		return (0);
	}
	while (std::getline(f_read, str) != 0)
	{
		found = 0;
		while ((found = str.find(s1, found)) != std::string::npos)
		{
			str.replace(str.find(s1), s1.length(), s2);
			found += s1.length();
		}
		outfile << str << std::endl;
	}
	return (0);
}

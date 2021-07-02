/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:15:27 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/16 13:49:51 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"

int		main(void)
{
	Contacts	contact[8];
	std::string	str;
	int			i;

	i = 0;
	std::cout << "Please enter ADD, SEARCH or EXIT: ";
	while(std::getline(std::cin, str))
	{
		if (str == "EXIT")
			return (0);
		else if (str == "ADD")
		{
			if (i < 8)
			{
				contact[i].make_contact();
				i++;
				// std::cin.ignore();
			}
			else
				std::cout << "Maximum contacts!!!" << std::endl;
		}
		else if (str == "SEARCH")
			contact->search(contact, i);
		else
			std::cout << "Wrong argument!!!" << std::endl;
		std::cout << "Please enter ADD, SEARCH or EXIT: ";
	}
	return (0);
}

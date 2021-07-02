/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 17:36:06 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/16 13:49:54 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"

static void		change_str(std::string &str)
{
	if (str.length() < 10)
		str.insert(str.begin(), 10 - str.length(), ' ');
	else
	{
		str.resize(9);
		str.append(".", 1);
	}
	return ;
}

static void		spisok(Contacts *contact, int count)
{
	char	s;
	int		i = 0;

	while (1)
	{
		std::cout << "Please enter index: ";
		std::cin >> s;
		if (std::cin.eof())
			exit(0);
		std::cin.ignore(32767, '\n');
		if (s == '0' || s == '1' || s == '2' || s == '3' ||
			s == '4' || s == '5' || s == '6' || s == '7')
		{
			i = s - '0';
			if (i >= 0 && i < count)
				break ;
			else
				std::cout << "Wrong index!!!" << std::endl;
		}
		else
			std::cout << "Wrong index!!!" << std::endl;
	}
	contact->vivod(&contact[i]);
	return ;
}

void			Contacts::vivod(Contacts *contact)
{
	std::cout << "first name: " << contact->first_name << std::endl;
	std::cout << "last name: " << contact->last_name << std::endl;
	std::cout << "nickname: " << contact->nickname << std::endl;
	std::cout << "login: " << contact->login << std::endl;
	std::cout << "postal address: " << contact->postal_address << std::endl;
	std::cout << "email address: " << contact->email_address << std::endl;
	std::cout << "phone number: " << contact->phone_number << std::endl;
	std::cout << "birthday date: " << contact->birthday_date << std::endl;
	std::cout << "favorite meal: " << contact->favorite_meal << std::endl;
	std::cout << "underwear color: " << contact->underwear_color << std::endl;
	std::cout << "darkest secret: " << contact->darkest_secret << std::endl;
	return ;
}

void			Contacts::search(Contacts *contact, int count)
{
	std::string	str;

	if (count == 0)
	{
		std::cout << "Add contacts for search!!!" << std::endl;
		return ;
	}
	if (count > 8)
		count = 8;
	for (int i = 0; i < count; i++)
	{
		std::cout << "         " << i << "|";
		str = contact[i].first_name;
		change_str(str);
		std::cout << str << "|";
		str = contact[i].last_name;
		change_str(str);
		std::cout << str << "|";
		str = contact[i].nickname;
		change_str(str);
		std::cout << str << "|" << std::endl;
	}
	spisok(contact, count);
}

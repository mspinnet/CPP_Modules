/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:44:23 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/16 13:49:52 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"

void	Contacts::make_contact(void)
{
	std::cout << "Please enter your first name: ";
	if (std::getline(std::cin, this->first_name) == 0)
		exit(0);
	std::cout << "Please enter your last name: ";
	if (std::getline(std::cin, this->last_name) == 0)
		exit(0);
	std::cout << "Please enter your nickname: ";
	if (std::getline(std::cin, this->nickname) == 0)
		exit(0);
	std::cout << "Please enter your login: ";
	if (std::getline(std::cin, this->login) == 0)
		exit(0);
	std::cout << "Please enter your postal address: ";
	if (std::getline(std::cin, this->postal_address) == 0)
		exit(0);
	std::cout << "Please enter your email address: ";
	if (std::getline(std::cin, this->email_address) == 0)
		exit(0);
	std::cout << "Please enter your phone number: ";
	if (std::getline(std::cin, this->phone_number) == 0)
		exit(0);
	std::cout << "Please enter your birthday date: ";
	if (std::getline(std::cin, this->birthday_date) == 0)
		exit(0);
	std::cout << "Please enter your favorite meal: ";
	if (std::getline(std::cin, this->favorite_meal) == 0)
		exit(0);
	std::cout << "Please enter your underwear color: ";
	if (std::getline(std::cin, this->underwear_color) == 0)
		exit(0);
	std::cout << "Please enter your darkest secret: ";
	if (std::getline(std::cin, this->darkest_secret) == 0)
		exit(0);
	return;
}

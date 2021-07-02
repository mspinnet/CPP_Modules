/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 14:25:05 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/06 16:25:37 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

Serialize::Serialize(void)
{
	return;
}

Serialize::Serialize(Serialize const &ser)
{
	*this = ser;
	return;
}

Serialize &Serialize::operator= (Serialize const &ser)
{
	(void)ser;
	return *this;
}

Serialize::~Serialize(void)
{
	return;
}

void	*Serialize::serialize(void)
{
	int i;
	
	std::srand(time(NULL));
	Data *my_data = new struct Data;
	my_data->str1 = new std::string;
	my_data->str2 = new std::string;
	for (int j = 0; j < 20; j++)
	{
		i = 97 + rand() % 26;
		*my_data->str1 = *my_data->str1 + static_cast<char>(i);
		i = 97 + rand() % 26;
		*my_data->str2 = *my_data->str2 + static_cast<char>(i);
	}
	my_data->rand = rand() % 1000;
	return reinterpret_cast<void*>(my_data);
}

Data	*Serialize::deserialize(void *raw)
{
	Data	*reinter = reinterpret_cast<Data*>(raw);
	return reinter;
}

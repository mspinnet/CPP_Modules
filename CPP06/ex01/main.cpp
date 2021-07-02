/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 13:50:42 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/06 16:19:27 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int	main()
{
	Serialize	ser;
	void		*my_data = ser.serialize();
	Data 		*data = ser.deserialize(my_data);
	std::cout << *data->str1 << " size: " << sizeof(data->str1) << std::endl;
	std::cout << *data->str2 << " size: " << sizeof(data->str2) << std::endl;
	std::cout << data->rand << " size: " << sizeof(data->rand) << std::endl;
	return (0);
}

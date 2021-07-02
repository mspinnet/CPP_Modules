/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 13:35:28 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/09 14:14:34 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>

int		main(void)
{
	std::list<int> test;
	for (int i = 0; i < 5; i++)
		test.push_back(10 - i);
	std::list<int>::const_iterator it;
	try
	{
		it = easyfind(test, 6);
		std::cout << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Not found!" << '\n';
	}
	return (0);
}

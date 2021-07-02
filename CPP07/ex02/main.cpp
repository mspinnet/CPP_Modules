/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 15:35:29 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/08 18:03:51 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.cpp"

void	test1()
{
	Array<int>a(5);
	a[1] = 3;
	try
	{
		a[3] = 1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		a[6] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << a[i] << std::endl;
}

void	test2()
{
	Array<int> a(5);
	for (unsigned int i = 0; i < a.size(); i++)
		a[i] = i + 1;
	std::cout << std::endl;
	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << a[i] << std::endl;
	Array<int> b = a;
	std::cout << std::endl;
	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << std::endl;
	for (unsigned int i = 0; i < a.size(); i++)
		a[i] = i + 5;
	std::cout << std::endl;
	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << a[i] << std::endl;
	std::cout << std::endl;
	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << std::endl;
}

void	test3()
{
	Array<std::string> a(2);
	a[0] = std::string("wow");
	a[1] = std::string("bluh");
	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << a[i] << std::endl;
	Array<std::string> b = a;
	std::cout << std::endl;
	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << std::endl;
	for (unsigned int i = 0; i < a.size(); i++)
		a[i] += "!!!";
	std::cout << std::endl;
	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << a[i] << std::endl;
	std::cout << std::endl;
	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << std::endl;
}

int main()
{
	test1();
	// test2();
	// test3();
	return (0);
}

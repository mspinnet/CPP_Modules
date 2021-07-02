/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 16:01:26 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/09 17:55:46 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

void	test_sub(void)
{
	try
	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return;
}

void	my_test(void)
{
	try
	{
		Span sp = Span(10000);
		std::vector<int> ar;
		for (int i = 0; i < 10000; i++)
			ar.push_back(i);
		std::vector<int>::iterator start = ar.begin();
		std::vector<int>::iterator end = ar.end();
		sp.addNumbers<std::vector<int> >(start, end);
		// sp.addNumbers<std::vector<int> >(start, end);
		// sp.addNumber(123);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return;
}

int		main(void)
{
	std::srand(time(NULL));
	test_sub();
	my_test();
	return (0);
}

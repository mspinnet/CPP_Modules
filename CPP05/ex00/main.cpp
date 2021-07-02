/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:15:36 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/02 15:43:47 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat bur1("bur1", 150);
		std::cout << bur1;
		bur1.decrement();
		std::cout << bur1;
		bur1.increment();
		std::cout << bur1;

		Bureaucrat bur2("bur2", 1);
		std::cout << bur2;
		bur2.increment();
		std::cout << bur2;
		bur2.decrement();
		std::cout << bur2;

		Bureaucrat bur3("bur3", 200);
		std::cout << bur3;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}

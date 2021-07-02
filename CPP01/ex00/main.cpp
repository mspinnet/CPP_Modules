/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 15:05:11 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/17 16:42:40 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(std::string name, std::string color, int age)
{
	Pony	*pony_heap;

	std::cout << "***Pony on the HEAP***" << std::endl;
	pony_heap = new Pony(name, color, age);
	delete pony_heap;
}

void	ponyOnTheStack(std::string name, std::string color, int age)
{
	std::cout << "***Pony on the STACK***" << std::endl;
	Pony	pony_stack = Pony(name, color, age);
}

int		main(void)
{
	ponyOnTheHeap("Bob", "Red", 14);
	std::cout << std::endl;
	ponyOnTheStack("Elly", "Pink", 7);
	return (0);
}
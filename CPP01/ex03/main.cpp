/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 11:32:56 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/18 15:25:01 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int		main(void)
{
	std::srand(time(NULL));
	std::cout << "***HORDE IS BORN***" << std::endl;
	ZombieHorde	horde = ZombieHorde(7);
	horde.announce();
	std::cout << std::endl;
	std::cout << "***HORDE IS DESTROYED***" << std::endl;
	return (0);
}

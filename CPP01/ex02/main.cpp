/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 11:32:56 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/18 13:55:31 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	randomChamp(void)
{
	std::string	names[5];
	int			i;

	names[0] = "Bobby";
	names[1] = "Zod";
	names[2] = "Buck";
	names[3] = "Steph";
	names[4] = "Elly";
	i = std::rand() % 5;
	Zombie	new_zomb = Zombie(names[i], "Mob");
	new_zomb.announce();
}

int		main(void)
{
	std::srand(time(NULL));
	ZombieEvent	event;
	Zombie	*new_zombie;

	std::cout << "***Created with ZombieEvent***" << std::endl;
	event.setZombieType("Boss");
	new_zombie = event.newZombie("Zak");
	new_zombie->announce();
	delete new_zombie;
	std::cout << std::endl;
	std::cout << "***Created with randomChamp***" << std::endl;
	randomChamp();
	return (0);
}

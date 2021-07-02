/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 14:35:27 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/18 15:25:05 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	horde = new Zombie[N];
	n = N;
}

void	ZombieHorde::announce(void)
{
	for (int i = 0; i < n; i++)
		horde[i].announce();
}

ZombieHorde::~ZombieHorde()
{
	delete[] horde;
}

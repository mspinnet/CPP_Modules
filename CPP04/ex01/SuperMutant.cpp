/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 13:41:08 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/29 14:34:05 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	return;
}

SuperMutant::SuperMutant(SuperMutant const &SM)
{
	*this = SM;
	return;
}

SuperMutant &SuperMutant::operator= (SuperMutant const &SM)
{
	Enemy::operator=(SM);
	return *this;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh..." << std::endl;
	return;
}

void	SuperMutant::takeDamage(int	damage)
{
	int	dmg = damage - 3;
	Enemy::takeDamage(dmg);
	return;
}

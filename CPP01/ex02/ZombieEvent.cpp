/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 11:49:57 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/18 13:55:37 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type)
{
	_type = type;
	return ;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie	*new_zombie;

	new_zombie = new Zombie(name, _type);
	return (new_zombie);
}

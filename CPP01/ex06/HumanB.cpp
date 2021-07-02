/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 20:29:19 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/18 21:09:36 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::setWeapon(Weapon &gunB)
{
	_gunB = &gunB;
}

HumanB::HumanB(std::string name) : _name(name)
{
	return ;
}

void	HumanB::attack(void)
{
	std::cout << _name << " attacks with his " << _gunB->getType() << std::endl;
}

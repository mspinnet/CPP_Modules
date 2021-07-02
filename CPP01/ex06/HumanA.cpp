/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 19:18:25 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/18 21:09:42 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &gunA) : _name(name), _gunA(gunA)
{
	return ;
}

void	HumanA::attack(void)
{
	std::cout << _name << " attacks with his " << _gunA.getType() << std::endl;
}

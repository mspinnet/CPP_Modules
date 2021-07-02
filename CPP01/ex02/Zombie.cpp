/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 17:33:30 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/18 13:55:34 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> " << "Braiiiiiiinnnssss ..." << std::endl;
	return ;
}

Zombie::Zombie(std::string name, std::string type)
{
	_name = name;
	_type = type;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->_name << " is died!!!" << std::endl;
}

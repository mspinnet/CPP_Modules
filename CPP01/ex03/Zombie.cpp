/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 17:33:30 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/18 15:25:02 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> " << "Braiiiiiiinnnssss ..." << std::endl;
	return ;
}

Zombie::Zombie()
{
	std::string	names[5];
	std::string	types[5];
	int			i;
	int			j;

	names[0] = "Bobby";
	names[1] = "Zod";
	names[2] = "Buck";
	names[3] = "Steph";
	names[4] = "Elly";
	types[0] = "Pawn";
	types[1] = "Bishop";
	types[2] = "Knight";
	types[3] = "Rook";
	types[4] = "King";
	j = std::rand() % 5;
	i = std::rand() % 5;
	_name = names[i];
	_type = types[j];
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->_name << " is died!!!" << std::endl;
}

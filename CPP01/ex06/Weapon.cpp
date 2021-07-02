/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 19:09:38 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/18 21:09:45 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	_type = "";
}

Weapon::Weapon(std::string type)
{
	_type = type;
}

void	Weapon::setType(std::string type)
{
	_type = type;
	return ;
}

const std::string	&Weapon::getType(void)
{
	const std::string &str = _type;
	return (str);
}

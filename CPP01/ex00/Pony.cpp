/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 15:50:59 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/17 16:42:42 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony()
{
	_name = "";
	_color = "";
	_age = 0;
	return ;
}

Pony::~Pony()
{
	std::cout << _name << " is died!!!" << std::endl;
}

Pony::Pony(std::string name, std::string color, int age) : _name(name), _color(color), _age(age)
{
	std::cout << "Name: " << _name << std::endl;
	std::cout << "Color: " << _color << std::endl;
	std::cout << "Age: " << _age << std::endl;
	return ;
}

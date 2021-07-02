/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 18:59:13 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/24 11:10:19 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
{
	std::cout << "Constructor SuperTrap called!!!" << std::endl;
	return ;
}

SuperTrap::SuperTrap(std::string _name) : NinjaTrap(1), FragTrap(2)
{
	this->name = _name;
	std::cout << "Constructor SuperTrap called!!!" << std::endl;
	return ;
}

SuperTrap::SuperTrap(SuperTrap const &SuperT)
{
	std::cout << "Copy constructor SuperTrap called" << std::endl;
	*this = SuperT;
	return ;
}

SuperTrap &SuperTrap::operator= (SuperTrap const &SuperT)
{
	std::cout << "Assignation operator SuperTrap called" << std::endl;
	if (this != &SuperT)
	{
		this->Hit_points = SuperT.Hit_points;
		this->Max_hit_points = SuperT.Max_hit_points;
		this->Energy_point = SuperT.Energy_point;
		this->Max_energy_point = SuperT.Max_energy_point;
		this->Level = SuperT.Level;
		this->name = SuperT.name;
		this->Melee_attack_damage = SuperT.Melee_attack_damage;
		this->Ranged_attack_damage = SuperT.Ranged_attack_damage;
		this->Armor_damage_reduction =SuperT.Armor_damage_reduction;
	}
	return *this;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "Destructor SuperTrap called!!!" << std::endl;
	return ;
}

void	SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}

void	SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

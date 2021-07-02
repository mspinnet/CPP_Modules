/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 17:22:37 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/24 11:28:44 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "Constructor ScavTrap called!!!" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string _name)
{
	this->Hit_points = 100;
	this->Max_hit_points = 100;
	this->Energy_point = 50;
	this->Max_energy_point = 50;
	this->Level = 1;
	this->name = _name;
	this->Melee_attack_damage = 20;
	this->Ranged_attack_damage = 15;
	this->Armor_damage_reduction = 3;
	std::cout << "Constructor ScavTrap called!!!" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &ST)
{
	std::cout << "Copy constructor ScavTrap called" << std::endl;
	*this = ST;
	return ;
}

ScavTrap &ScavTrap::operator= (ScavTrap const &ST)
{
	std::cout << "Assignation operator ScavTrap called" << std::endl;
	if (this != &ST)
	{
		this->Hit_points = ST.Hit_points;
		this->Max_hit_points = ST.Max_hit_points;
		this->Energy_point = ST.Energy_point;
		this->Max_energy_point = ST.Max_energy_point;
		this->Level = ST.Level;
		this->name = ST.name;
		this->Melee_attack_damage = ST.Melee_attack_damage;
		this->Ranged_attack_damage = ST.Ranged_attack_damage;
		this->Armor_damage_reduction =ST.Armor_damage_reduction;
	}
	return *this;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor ScavTrap called!!!" << std::endl;
	return ;
}

void	ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << this->name << " hits with an ax " << target << " causing " << this->Melee_attack_damage << " total damage!" << std::endl;
	return ;
}

void	ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << this->name << " throwing an ax " << target << " causing " << this->Ranged_attack_damage << " total damage!" << std::endl;
	return ;
}

void		ScavTrap::challengeNewcomer(std::string const &target)
{
	int			i;

	i = std::rand() % 5;
	if (i == 0)
		std::cout << target << " must listen to Morgenstern's song in FULL!!! Yeahhhh, writhe in agony :)))" << std::endl;
	if (i == 1)
		std::cout << target << " must watching something sad and crying like little girl!" << std::endl;
	if (i == 2)
		std::cout << target << " must eating something that hate!" << std::endl;
	if (i == 3)
		std::cout << target << " must drink something nasty!" << std::endl;
	if (i == 4)
		std::cout << target << " must listen favorite song and not singing along!" << std::endl;
}

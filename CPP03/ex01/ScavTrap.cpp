/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 17:22:37 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/24 11:30:12 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "SC4V-TP is rising!!!" << std::endl;
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
	std::cout << "SC4V-TP " << this->name << " is rising!!!" << std::endl;
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
	std::cout << "SC4V-TP " << this->name << " is Died!!!" << std::endl;
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

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (amount <= (unsigned int)this->Armor_damage_reduction)
	{
		amount = 0;
		this->Hit_points -= 0;
	}
	else
	{
		amount = amount - this->Armor_damage_reduction;
		this->Hit_points -= amount;
		if (this->Hit_points < 0)
			this->Hit_points = 0;
	}
	std::cout << "SC4V-TP " << this->name << " take " << amount << " total damage!" << std::endl;
	std::cout << "SC4V-TP " << this->name << " HP = " << this->Hit_points << std::endl;
	return ;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	this->Hit_points += amount;
	if (this->Hit_points > this->Max_hit_points)
		this->Hit_points = this->Max_hit_points;
	std::cout << "SC4V-TP " << this->name << " be repaired on " << amount << " points!" << std::endl;
	std::cout << "SC4V-TP " << this->name << " HP = " << this->Hit_points << std::endl;
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

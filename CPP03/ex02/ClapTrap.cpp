/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 11:47:30 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/24 11:31:57 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Constructor ClapTrap called!!!" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string _name)
{
	this->Hit_points = 100;
	this->Max_hit_points = 100;
	this->Energy_point = 50;
	this->Max_energy_point = 50;
	this->Level = 1;
	this->name = _name;
	this->Melee_attack_damage = 25;
	this->Ranged_attack_damage = 20;
	this->Armor_damage_reduction = 7;
	std::cout << "Constructor ClapTrap called!!!" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &CT)
{
	std::cout << "Copy constructor ClapTrap called" << std::endl;
	*this = CT;
	return ;
}

ClapTrap &ClapTrap::operator= (ClapTrap const &CT)
{
	std::cout << "Assignation operator ClapTrap called" << std::endl;
	if (this != &CT)
	{
		this->Hit_points = CT.Hit_points;
		this->Max_hit_points = CT.Max_hit_points;
		this->Energy_point = CT.Energy_point;
		this->Max_energy_point = CT.Max_energy_point;
		this->Level = CT.Level;
		this->name = CT.name;
		this->Melee_attack_damage = CT.Melee_attack_damage;
		this->Ranged_attack_damage = CT.Ranged_attack_damage;
		this->Armor_damage_reduction =CT.Armor_damage_reduction;
	}
	return *this;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor ClapTrap called!!!" << std::endl;
	return ;
}

void	ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << "CL4P-TP " << this->name << " punch " << target << " on " << this->Melee_attack_damage << " melee damage!" << std::endl;
	return ;
}

void	ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << "CL4P-TP " << this->name << " throws a stone " << target << " on " << this->Ranged_attack_damage << " ranged damage!" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
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
	std::cout << this->name << " gets " << amount << " damage!" << std::endl;
	std::cout << this->name << " current HP = " << this->Hit_points << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->Hit_points += amount;
	if (this->Hit_points > this->Max_hit_points)
		this->Hit_points = this->Max_hit_points;
	std::cout << this->name << " be healed on " << amount << " HP!" << std::endl;
	std::cout << this->name << " current HP = " << this->Hit_points << std::endl;
	return ;
}

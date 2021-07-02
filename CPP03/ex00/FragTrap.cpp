/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 12:33:47 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/23 15:59:51 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FR4G-TP is born!!!" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string _name)
{
	this->Hit_points = 100;
	this->Max_hit_points = 100;
	this->Energy_point = 100;
	this->Max_energy_point = 100;
	this->Level = 1;
	this->name = _name;
	this->Melee_attack_damage = 30;
	this->Ranged_attack_damage = 20;
	this->Armor_damage_reduction = 5;
	std::cout << "FR4G-TP " << this->name << " is born!!!" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &FT)
{
	std::cout << "Copy constructor FragTrap called" << std::endl;
	*this = FT;
	return ;
}

FragTrap &FragTrap::operator= (FragTrap const &FT)
{
	std::cout << "Assignation operator FragTrap called" << std::endl;
	if (this != &FT)
	{
		this->Hit_points = FT.Hit_points;
		this->Max_hit_points = FT.Max_hit_points;
		this->Energy_point = FT.Energy_point;
		this->Max_energy_point = FT.Max_energy_point;
		this->Level = FT.Level;
		this->name = FT.name;
		this->Melee_attack_damage = FT.Melee_attack_damage;
		this->Ranged_attack_damage = FT.Ranged_attack_damage;
		this->Armor_damage_reduction =FT.Armor_damage_reduction;
	}
	return *this;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FR4G-TP " << this->name << " is destroyd!!!" << std::endl;
	return ;
}

void	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " at melee, causing " << this->Melee_attack_damage << " points of damage!" << std::endl;
	return ;
}

void	FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " at range, causing " << this->Ranged_attack_damage << " points of damage!" << std::endl;
	return ;
}

void	FragTrap::takeDamage(unsigned int amount)
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
	std::cout << "FR4G-TP " << this->name << " causing " << amount << " points of damage!" << std::endl;
	std::cout << "FR4G-TP " << this->name << " HP = " << this->Hit_points << std::endl;
	return ;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	this->Hit_points += amount;
	if (this->Hit_points > this->Max_hit_points)
		this->Hit_points = this->Max_hit_points;
	std::cout << "FR4G-TP " << this->name << " be repaired on " << amount << " points!" << std::endl;
	std::cout << "FR4G-TP " << this->name << " HP = " << this->Hit_points << std::endl;
	return ;
}

int	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int			i;

	if (this->Energy_point < 25)
	{
		std::cout << "Out of energy!!!" << std::endl;
		return (1);
	}
	if (this->Hit_points <= 0)
		return (1);
	this->Energy_point -= 25;
	i = std::rand() % 5;
	if (i == 0)
	{
		std::cout << "FR4G-TP " << this->name << " takes a run, but hits a stone with his little finger, takes 50 points of damage, misses and causing " << target << " 0 points of damage, because it hurts like hell!" << std::endl;
		this->Hit_points -= 45;
	}
	if (i == 1)
		std::cout << "FR4G-TP " << this->name << " sings the Morgenstern song and causing " << target << " 10 points of damage, because his ears are bleeding!" << std::endl;
	if (i == 2)
		std::cout << "FR4G-TP " << this->name << " causing " << target << " 5 points of damage! Why? Because he CAN!!!" << std::endl;
	if (i == 3)
		std::cout << "FR4G-TP " << this->name << " coming to " << target << " sneezes on him and causing fatal points of damage infecting him with the COVID-19!!!" << std::endl;
	if (i == 4)
		std::cout << "FR4G-TP " << this->name << " cast a spell, that turns the " << target << " into a chicken and causing 20 points of moral damage!" << std::endl;
	std::cout << "FR4G-TP " << name << " HP = " << this->Hit_points << std::endl;
	std::cout << "FR4G-TP " << name << " EP = " << this->Energy_point << std::endl;
	return (0);
}

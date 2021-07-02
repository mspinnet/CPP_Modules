/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 14:01:42 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/24 11:26:04 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
	std::cout << "Constructor NinjaTrap called!!!" << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(std::string _name)
{
	this->Hit_points = 60;
	this->Max_hit_points = 60;
	this->Energy_point = 120;
	this->Max_energy_point = 120;
	this->Level = 1;
	this->name = _name;
	this->Melee_attack_damage = 60;
	this->Ranged_attack_damage = 5;
	this->Armor_damage_reduction = 0;
	std::cout << "Constructor NinjaTrap called!!!" << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(NinjaTrap const &NT)
{
	std::cout << "Copy constructor NinjaTrap called" << std::endl;
	*this = NT;
	return ;
}

NinjaTrap &NinjaTrap::operator= (NinjaTrap const &NT)
{
	std::cout << "Assignation operator NinjaTrap called" << std::endl;
	if (this != &NT)
	{
		this->Hit_points = NT.Hit_points;
		this->Max_hit_points = NT.Max_hit_points;
		this->Energy_point = NT.Energy_point;
		this->Max_energy_point = NT.Max_energy_point;
		this->Level = NT.Level;
		this->name = NT.name;
		this->Melee_attack_damage = NT.Melee_attack_damage;
		this->Ranged_attack_damage = NT.Ranged_attack_damage;
		this->Armor_damage_reduction =NT.Armor_damage_reduction;
	}
	return *this;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "Destructor NinjaTrap called!!!" << std::endl;
	return ;
}

void	NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << "Ninja " << this->name << " strikes with a katana " << target << " at melee, causing " << this->Melee_attack_damage << " points of damage!" << std::endl;
}

void	NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << "Ninja " << this->name << " throws shuriken " << target << " at range, causing " << this->Ranged_attack_damage << " points of damage!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap &target)
{
	std::cout << "Ninja " << this->name << " goes against the enemy " << target.getName() << std::endl;
	std::cout << "Ninja uses cloning technique and call 3 copies!" << std::endl;
	while (target.getHP() > 0)
	{
		this->meleeAttack(target.getName());
		target.takeDamage(this->Melee_attack_damage);
		if (target.getHP() < 0)
		{
			std::cout << "Enemy " << target.getName() << " is died!!!" << std::endl;
			return ;
		}
		std::cout << "Copy one ";
		this->rangedAttack(target.getName());
		target.takeDamage(this->Ranged_attack_damage);
		std::cout << "Copy two ";
		this->meleeAttack(target.getName());
		target.takeDamage(this->Melee_attack_damage);
		if (target.getHP() < 0)
		{
			std::cout << "Enemy " << target.getName() << " is died!!!" << std::endl;
			return ;
		}
		std::cout << "Copy three ";
		this->rangedAttack(target.getName());
		target.takeDamage(this->Ranged_attack_damage);
	}
}

void	NinjaTrap::ninjaShoebox(FragTrap &target)
{
	int enemy_hp = target.getHP();
	std::string enemy_name = target.getName();
	std::cout << "Ninja " << this->name << " vs enemy " << enemy_name << std::endl;
	std::cout << "FIGHT!!!" << std::endl;
	while (this->Hit_points > 0 || enemy_hp > 0)
	{
		this->meleeAttack(enemy_name);
		target.takeDamage(this->Melee_attack_damage);
		target.meleeAttack(this->name);
		this->takeDamage(30);
		enemy_hp = target.getHP();
		if (this->Hit_points <= 0)
		{
			std::cout << "Ninja " << this->name << " is died!" << std::endl;
			return ;
		}
		else if (enemy_hp <= 0)
		{
			std::cout << "Enemy " << enemy_name << " is died!" << std::endl;
			return ;
		}
		this->rangedAttack(enemy_name);
		target.takeDamage(this->Ranged_attack_damage);
		target.rangedAttack(this->name);
		this->takeDamage(20);
		enemy_hp = target.getHP();
		if (this->Hit_points <= 0)
		{
			std::cout << "Ninja " << this->name << " is died!" << std::endl;
			return ;
		}
		else if (enemy_hp <= 0)
		{
			std::cout << "Enemy " << enemy_name << " is died!" << std::endl;
			return ;
		}
		this->beRepaired(10);
		target.beRepaired(15);
		enemy_hp = target.getHP();
	}
}

void	NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	std::cout << target.getName() << " Give challenge ninja " << this->name << " you must watch all NARUTO episodes and become HOKAGE!!!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	std::cout << "Ninja " << target.getName() << " goes against himself!!!" << std::endl;
	std::cout << "But he is taken to a madhouse with Schizophrenia!!! It's sad((" << std::endl;
}

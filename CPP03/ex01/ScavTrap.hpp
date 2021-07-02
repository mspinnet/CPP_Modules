/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 17:18:22 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/24 11:33:06 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <iostream>
# include <string>

class ScavTrap
{
private:
	int			Hit_points;
	int			Max_hit_points;
	int			Energy_point;
	int			Max_energy_point;
	int			Level;
	std::string	name;
	int			Melee_attack_damage;
	int			Ranged_attack_damage;
	int			Armor_damage_reduction;
public:
	ScavTrap(void);
	ScavTrap(std::string _name);
	ScavTrap(ScavTrap const &ST);
	~ScavTrap(void);
	ScavTrap &operator= (ScavTrap const &ST);

	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer(std::string const &target);
};

#endif

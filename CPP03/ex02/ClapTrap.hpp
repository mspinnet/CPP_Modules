/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 11:40:40 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/23 12:13:15 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>

class ClapTrap
{
protected:
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
	ClapTrap(void);
	ClapTrap(std::string _name);
	ClapTrap(ClapTrap const &CT);
	~ClapTrap(void);
	ClapTrap &operator= (ClapTrap const &CT);

	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif

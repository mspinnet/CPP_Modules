/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 12:13:30 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/22 16:46:27 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <iostream>
# include <string>

class FragTrap
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
	FragTrap(void);
	FragTrap(std::string _name);
	FragTrap(FragTrap const &FT);
	~FragTrap(void);
	FragTrap &operator= (FragTrap const &FT);

	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	int		vaulthunter_dot_exe(std::string const &target);
};

#endif

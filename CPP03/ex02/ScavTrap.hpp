/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 17:18:22 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/24 11:29:33 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(std::string _name);
	ScavTrap(ScavTrap const &ST);
	~ScavTrap(void);
	ScavTrap &operator= (ScavTrap const &ST);

	void	challengeNewcomer(std::string const &target);
	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
};

#endif

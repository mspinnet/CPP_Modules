/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:58:46 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/24 11:10:08 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_H
# define SUPERTRAP_H

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
public:
	SuperTrap(void);
	SuperTrap(std::string _name);
	SuperTrap(SuperTrap const &SuperT);
	~SuperTrap(void);
	SuperTrap &operator= (SuperTrap const &SuperT);
	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
};

#endif

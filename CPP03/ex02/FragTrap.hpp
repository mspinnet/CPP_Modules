/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 12:13:30 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/24 11:24:40 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(std::string _name);
	FragTrap(FragTrap const &FT);
	~FragTrap(void);
	FragTrap &operator= (FragTrap const &FT);

	int		vaulthunter_dot_exe(std::string const &target);
	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
};

#endif

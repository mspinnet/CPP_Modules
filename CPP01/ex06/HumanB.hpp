/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 19:07:59 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/18 21:09:39 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

class HumanB
{
private:
	Weapon 		*_gunB;
	std::string	_name;
public:
	void	setWeapon(Weapon &gunB);
	HumanB(std::string name);
	void	attack();
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 14:46:45 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/29 15:32:52 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include "Enemy.hpp"
# include "AWeapon.hpp"

class Character
{
private:
	std::string _name;
	int			_AP;
	AWeapon		*_weapon;
public:
	Character(void);
	Character(std::string const &name);
	Character(Character const &pers);
	Character &operator= (Character const &pers);
	~Character(void);

	void	recoverAP(void);
	void	equip(AWeapon *weapon);
	void	attack(Enemy *eny);
	std::string const	getName(void) const;
	AWeapon	const		*getWeapon(void) const;
	int					getAP(void) const;
};

std::ostream	&operator<<(std::ostream &o, Character const &pers);

#endif

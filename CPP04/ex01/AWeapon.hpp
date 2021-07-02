/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:03:27 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/29 12:59:56 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
# define AWEAPON_H

# include <iostream>
# include <string>

class AWeapon
{
private:
	std::string	_name;
	int			_apcost;
	int			_damage;
public:
	AWeapon(void);
	AWeapon(std::string const &name, int apcost, int damage);
	AWeapon(AWeapon const &weapon);
	AWeapon &operator= (AWeapon const &weapon);
	virtual ~AWeapon(void);
	
	std::string const	getName(void) const;
	int					getAPCost(void) const;
	int					getDamage(void) const;
	virtual void		attack(void) const = 0;
};

#endif

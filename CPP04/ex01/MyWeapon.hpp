/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyWeapon.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:44:33 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/29 16:18:00 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYWEAPON_H
# define MYWEAPON_H

# include "AWeapon.hpp"

class MyWeapon : public AWeapon
{
public:
	MyWeapon(void);
	MyWeapon(MyWeapon const &MW);
	MyWeapon &operator= (MyWeapon const &MW);
	virtual ~MyWeapon(void);
	
	virtual void		attack(void) const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 13:20:06 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/29 13:26:49 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
# define ENEMY_H

# include <iostream>
# include <string>

class Enemy
{
private:
	std::string	_type;
	int			_hp;
public:
	Enemy(void);
	Enemy(int hp, std::string const &type);
	Enemy(Enemy const &eny);
	Enemy &operator= (Enemy const &eny);
	virtual ~Enemy(void);

	std::string const	getType(void) const;
	int					getHP(void) const;
	virtual void		takeDamage(int damage);
};

#endif

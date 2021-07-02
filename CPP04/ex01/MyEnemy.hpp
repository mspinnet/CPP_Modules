/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyEnemy.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 14:34:18 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/29 17:12:07 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYENEMY_H
# define MYENEMY_H

# include "Enemy.hpp"

class MyEnemy : public Enemy
{
public:
	MyEnemy(void);
	MyEnemy(MyEnemy const &ME);
	MyEnemy &operator= (MyEnemy const &ME);
	virtual ~MyEnemy(void);
};

#endif

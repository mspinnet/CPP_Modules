/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 17:17:54 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/18 13:55:39 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

# include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string _type;
public:
	void	setZombieType(std::string type);
	Zombie	*newZombie(std::string name);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 14:31:15 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/01 14:36:53 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"

int main()
{
	ISpaceMarine *bob = new TacticalMarine;
	ISpaceMarine *jim = new AssaultTerminator;
	ISquad *vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine *cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	// COPY TEST
	// ISpaceMarine *bob = new TacticalMarine;
	// ISpaceMarine *jim = new AssaultTerminator;
	// Squad *vlc = new Squad;
	// vlc->push(bob);
	// vlc->push(jim);
	// std::cout << std::endl;
	// Squad *copy = new Squad(*vlc);
	// delete vlc;
	// for (int i = 0; i < copy->getCount(); ++i)
	// {
	// 	ISpaceMarine *cur = copy->getUnit(i);
	// 	cur->battleCry();
	// 	cur->rangedAttack();
	// 	cur->meleeAttack();
	// }
	// delete copy;
	// while (1);

	
	// PRISVOENIE TEST
	// ISpaceMarine *bob = new TacticalMarine;
	// ISpaceMarine *jim = new AssaultTerminator;
	// ISpaceMarine *max = new AssaultTerminator;
	// Squad *vlc = new Squad;
	// vlc->push(bob);
	// vlc->push(jim);
	// Squad *src = new Squad;
	// src->push(max);
	// std::cout << std::endl;
	// *src = *vlc;
	// delete vlc;
	// for (int i = 0; i < src->getCount(); ++i)
	// {
	// 	ISpaceMarine *cur = src->getUnit(i);
	// 	cur->battleCry();
	// 	cur->rangedAttack();
	// 	cur->meleeAttack();
	// }
	// delete src;
	// while (1);

	return 0;
}

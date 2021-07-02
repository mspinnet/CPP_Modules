/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 15:28:06 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/29 17:57:02 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Character.hpp"
#include "MyEnemy.hpp"
#include "MyWeapon.hpp"

int main()
{
	Character *me = new Character("me");
	std::cout << *me;
	// Enemy *b = new RadScorpion();
	// AWeapon *pr = new PlasmaRifle();
	// AWeapon *pf = new PowerFist();
	// me->equip(pr);
	// std::cout << *me;
	// me->equip(pf);
	// me->attack(b);
	// std::cout << *me;
	// me->equip(pr);
	// std::cout << *me;
	// me->attack(b);
	// std::cout << *me;
	// me->attack(b);
	// std::cout << *me;
	
	Enemy *myE = new MyEnemy();
	AWeapon *myW = new MyWeapon();
	me->equip(myW);
	std::cout << *me;
	me->attack(myE);
	std::cout << "Current enemy HP = " << myE->getHP() << std::endl;
	std::cout << *me;
	me->attack(myE);
	std::cout << "Current enemy HP = " << myE->getHP() << std::endl;
	std::cout << *me;
	me->attack(myE);
	std::cout << "Current enemy HP = " << myE->getHP() << std::endl;
	std::cout << *me;
	me->recoverAP();
	me->attack(myE);
	std::cout << "Current enemy HP = " << myE->getHP() << std::endl;
	std::cout << *me;
	return 0;
}

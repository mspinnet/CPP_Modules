/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 16:31:00 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/23 15:52:53 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int		main(void)
{
	FragTrap	FT1("Sanya");
	
	// std::srand(time(NULL));
	// std::cout << "Default function:" << std::endl << std::endl;
	// FT1.meleeAttack("Dimon");
	// FT1.rangedAttack("Dimon");
	// FT1.takeDamage(15);
	// FT1.beRepaired(15);
	// std::cout << std::endl;
	// std::cout << "Vaulthunter_dot_exe function:" << std::endl << std::endl;
	// while (FT1.vaulthunter_dot_exe("Dimon") == 0);
	// std::cout << std::endl;

	ScavTrap	ST1("Tim");
	
	// std::cout << "Default function:" << std::endl << std::endl;
	// ST1.meleeAttack("Zombie");
	// ST1.rangedAttack("Zombie");
	// ST1.takeDamage(15);
	// ST1.beRepaired(15);
	// std::cout << std::endl;
	// std::cout << "ChallengeNewcomer function:" << std::endl << std::endl;
	// for (int i = 0; i < 3; i++)
	// 	ST1.challengeNewcomer("Zombie");
	// std::cout << std::endl;
	
	NinjaTrap	NT1("Naruto");
	ClapTrap	CT1("Father");

	std::cout << "Default function:" << std::endl << std::endl;
	ST1.meleeAttack("Modara");
	ST1.rangedAttack("Modara");
	ST1.takeDamage(15);
	ST1.beRepaired(15);
	std::cout << std::endl;
	std::cout << "NinjaShoebox function:" << std::endl << std::endl;
	std::cout << std::endl;
	NT1.ninjaShoebox(CT1);
	std::cout << std::endl;
	NT1.ninjaShoebox(FT1);
	std::cout << std::endl;
	NT1.ninjaShoebox(ST1);
	std::cout << std::endl;
	NT1.ninjaShoebox(NT1);
	std::cout << std::endl;
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 16:31:00 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/22 17:16:36 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{
	FragTrap	FT1("Sanya");
	
	std::srand(time(NULL));
	std::cout << "Default function:" << std::endl << std::endl;
	FT1.meleeAttack("Dimon");
	FT1.rangedAttack("Dimon");
	FT1.takeDamage(15);
	FT1.beRepaired(15);
	std::cout << std::endl;
	std::cout << "Vaulthunter_dot_exe function:" << std::endl << std::endl;
	while (FT1.vaulthunter_dot_exe("Dimon") == 0);
	return (0);
}

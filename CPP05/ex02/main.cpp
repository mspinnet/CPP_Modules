/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:15:36 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/03 17:21:55 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	std::srand(time(NULL));
	Form		*ppf = 0;
	Form		*rrf = 0;
	Form		*scf = 0;
	try
	{
		Bureaucrat	bur1("bur1", 5);
		ppf = new PresidentialPardonForm("Bob");
		rrf = new RobotomyRequestForm("Den");
		scf = new ShrubberyCreationForm("Garden");
		
		bur1.signForm(*scf);
		bur1.executeForm(*scf);
		// scf->execute(bur1);

		bur1.signForm(*rrf);
		bur1.executeForm(*rrf);
		// rrf->execute(bur1);
		
		bur1.signForm(*ppf);
		bur1.executeForm(*ppf);
		// ppf->execute(bur1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete ppf;
	delete rrf;
	delete scf;
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:15:36 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/04 11:37:41 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
	std::srand(time(NULL));
	Form		*ppf = 0;
	Form		*rrf = 0;
	Form		*scf = 0;
	Form		*_new = 0;
	try
	{
		Intern someRandomIntern;

		rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
		scf = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");
		ppf = someRandomIntern.makeForm("PresidentialPardonForm", "Bender");
		_new = someRandomIntern.makeForm("NewForm", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete ppf;
	delete rrf;
	delete scf;
	delete _new;
	return (0);
}

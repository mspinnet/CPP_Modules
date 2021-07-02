/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 17:36:29 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/03 19:26:46 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern was here!" << std::endl;
	this->forms[0] = new PresidentialPardonForm("");
	this->forms[1] = new RobotomyRequestForm("");
	this->forms[2] = new ShrubberyCreationForm("");
	return;
}

Intern::Intern(Intern const &intern)
{
	std::cout << "Copy constructor called" << std::endl;
	for (int i = 0; i < 3; i++)
	{
		if (intern.forms[i] != 0)
			this->forms[i] = intern.forms[i]->clone(this->forms[i]->getTarget());
		else
			this->forms[i] = 0;
	}
	return;
}

Intern &Intern::operator= (Intern const &intern)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &intern)
		return *this;
	for (int i = 0; i < 3; i++)
	{
		if (this->forms[i] != 0)
			delete this->forms[i];
	}
	for (int i = 0; i < 3; i++)
	{
		if (intern.forms[i] != 0)
			this->forms[i] = intern.forms[i]->clone(this->forms[i]->getTarget());
		else
			this->forms[i] = 0;
	}
	return *this;
}

Intern::~Intern(void)
{
	for (int i = 0; i < 3; i++)
		delete this->forms[i];
	std::cout << "Intern leaves!" << std::endl;
	return;
}

Form *Intern::makeForm(std::string const &name, std::string const &target)
{
	for (int i = 0; i < 3; i++)
	{
		if (this->forms[i]->getName() == name)
		{
			std::cout << "Intern creates " << this->forms[i]->getName() << std::endl;
			return this->forms[i]->clone(target);
		}
	}
	throw Intern::FormNotKnown();
	return (0);
}

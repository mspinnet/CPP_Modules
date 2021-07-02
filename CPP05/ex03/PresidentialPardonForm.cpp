/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 16:28:22 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/03 19:03:20 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("", 21, 21, "")
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form("PresidentialPardonForm", 25, 5, target)
{
	std::cout << "PresidentialPardonForm is create!" << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &PPF) : Form(PPF)
{
	return;
}

PresidentialPardonForm &PresidentialPardonForm::operator= (PresidentialPardonForm const &)
{
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm destroyed!" << std::endl;
	return;
}

void	PresidentialPardonForm::action(void) const
{
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox!" << std::endl;
	return;
}

Form	*PresidentialPardonForm::clone(std::string const &target) const
{
	Form *copy = new PresidentialPardonForm(target);
	return copy;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->getSign() == false)
	{
		std::cout << this->getName() << " not signed!" << std::endl;
		return;
	}
	if (executor.getGrade() > this->getGradeToExecute())
		throw PresidentialPardonForm::GradeTooLowException();
	else
	{
		std::cout << "Bureaucrat " << executor.getName() << " executes " << this->getName() << std::endl;
		this->action();
	}
	return;
}

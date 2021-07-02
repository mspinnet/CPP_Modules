/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 16:11:33 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/03 19:02:22 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("", 21, 21, "")
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("RobotomyRequestForm", 72, 45, target)
{
	std::cout << "RobotomyRequestForm is create!" << std::endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &RRF) : Form(RRF)
{
	return;
}

RobotomyRequestForm &RobotomyRequestForm::operator= (RobotomyRequestForm const &)
{
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm destroyed!" << std::endl;
	return;
}

void	RobotomyRequestForm::action(void) const
{
	int i = std::rand() % 2;
	if (i == 0)
		std::cout << "Robotomized successfully!" << std::endl;
	if (i == 1)
		std::cout << "It’s a failure!" << std::endl;
	return;
}

Form	*RobotomyRequestForm::clone(std::string const &target) const
{
	Form *copy = new RobotomyRequestForm(target);
	return copy;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->getSign() == false)
	{
		std::cout << this->getName() << " not signed!" << std::endl;
		return;
	}
	if (executor.getGrade() > this->getGradeToExecute())
		throw RobotomyRequestForm::GradeTooLowException();
	else
	{
		std::cout << "Bureaucrat " << executor.getName() << " executes " << this->getName() << std::endl;
		this->action();
	}
	return;
}

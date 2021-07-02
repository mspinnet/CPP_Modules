/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 13:49:38 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/03 17:05:05 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	return;
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name)
{
	if (grade < 1 || grade > 150)
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	else
		this->_grade = grade;
	std::cout << "Bureaucrat " << this->_name << " is born!" << std::endl;
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const &bur)
{
	*this = bur;
	return;
}

Bureaucrat &Bureaucrat::operator= (Bureaucrat const &)
{
	return *this;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat " << this->_name << " died!" << std::endl;
	return;
}

std::string const &Bureaucrat::getName() const
{
	return this->_name;
}

int		Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void	Bureaucrat::increment(void)
{
	std::cout << "Grade up!" << std::endl;
	if (this->_grade == 1)
	{
		std::cout << "Can't, it's MAX grade!" << std::endl;
		return;
	}
	this->_grade -= 1;
	return;
}

void	Bureaucrat::decrement(void)
{
	std::cout << "Grade down!" << std::endl;
	if (this->_grade == 150)
	{
		std::cout << "Can't, it's MIN grade!" << std::endl;
		return;
	}
	this->_grade += 1;
	return;
}

void Bureaucrat::signForm(Form &form)
{
	if (this->_grade <= form.getGradeToSign())
		form.beSigned(*this);
	else
		std::cout << "Bureaucrat " << this->_name << " cannot sign " << form.getName() << " because grade to low!" << std::endl;
}

void Bureaucrat::executeForm(Form &form)
{
	if (this->_grade <= form.getGradeToExecute())
		form.execute(*this);
	else
		std::cout << "Bureaucrat " << this->_name << " cannot execute " << form.getName() << " because grade to low!" << std::endl;
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &bur)
{
	o << bur.getName() << ", bureaucrat grade " << bur.getGrade() << std::endl;
	return o;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 12:36:09 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/03 16:30:38 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name(""), _grade_to_sign(21), _grade_to_execute(21)
{
	return;
}

Form::Form(std::string const &name, int const grade_to_sign, int const grade_to_execute) : _name(name), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute)
{
	if (grade_to_sign < 1 || grade_to_sign > 150 || grade_to_execute < 1 || grade_to_execute > 150)
	{
		if (grade_to_execute < 1 || grade_to_sign < 1)
			throw Form::GradeTooHighException();
		else if (grade_to_sign > 150 || grade_to_execute > 150)
			throw Form::GradeTooLowException();
	}
	else
		this->_sign = false;
	std::cout << "Form " << this->_name << " is create!" << std::endl;
	return;
}

Form::Form(Form const &_form) : _name(_form._name), _grade_to_sign(_form._grade_to_sign), _grade_to_execute(_form._grade_to_execute)
{
	this->_sign = _form._sign;
	return;
}

Form &Form::operator= (Form const &)
{
	return *this;
}

Form::~Form(void)
{
	std::cout << "Form " << this->_name << " destroyed!" << std::endl;
	return;
}

std::string const &Form::getName() const
{
	return this->_name;
}

int		Form::getGradeToSign(void) const
{
	return this->_grade_to_sign;
}

int		Form::getGradeToExecute(void) const
{
	return this->_grade_to_execute;
}

bool		Form::getSign(void) const
{
	return this->_sign;
}

void	Form::beSigned(Bureaucrat &bur)
{
	if (this->_sign == true)
	{
		std::cout << this->_name << " is already signed!" << std::endl;
	}
	if (bur.getGrade() <= this->_grade_to_sign)
	{
		this->_sign = true;
		std::cout << "Bureaucrat " << bur.getName() << " signs " << this->_name << std::endl;
	}
	else
		throw Form::GradeTooLowException();
	return;
}

std::ostream	&operator<<(std::ostream &o, Form const &_form)
{
	std::string	str;
	bool		sign = _form.getSign();
	if (sign == true)
		str = "signed!";
	else
		str = "not signed!";
	o << "Form " << _form.getName() << ", grade to sign " << _form.getGradeToSign() << ", grade to execute " << _form.getGradeToExecute()
	<< ", Form " << str << std::endl;
	return o;
}

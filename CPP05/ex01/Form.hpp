/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 11:58:18 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/03 13:37:30 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

class Bureaucrat;
# include "Bureaucrat.hpp"

class Form
{
private:
	std::string const	_name;
	int const			_grade_to_sign;
	int const			_grade_to_execute;
	bool				_sign;
	Form &operator= (Form const &_form);
	Form(void);
public:
	Form(std::string const &name, int const grade_to_sign, int const grade_to_execute);
	Form(Form const &_form);
	~Form(void);

	std::string const	&getName(void) const;
	int					getGradeToSign(void) const;
	int					getGradeToExecute(void) const;
	bool				getSign(void) const;
	void				beSigned(Bureaucrat &bur);

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			const char *str = "Grade too High!";
			return str;
		}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			const char *str = "Grade too Low!";
			return str;
		}
	};
};

std::ostream	&operator<<(std::ostream &o, Form const &_form);

#endif

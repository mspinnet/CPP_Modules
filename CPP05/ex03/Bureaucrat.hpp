/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 12:58:35 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/03 16:07:55 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <string>
# include <exception>
class Form;
# include "Form.hpp"

class Bureaucrat
{
private:
	std::string const	_name;
	int					_grade;
	Bureaucrat &operator= (Bureaucrat const &bur);
public:
	Bureaucrat(void);
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(Bureaucrat const &bur);
	~Bureaucrat(void);

	std::string const	&getName(void) const;
	int					getGrade(void) const;
	void				increment(void);
	void				decrement(void);
	void				signForm(Form &form);
	void				executeForm(Form &form);

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

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &bur);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 17:27:32 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/03 19:26:47 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern
{
private:
	Form *forms[3];
public:
	Intern(void);
	Intern(Intern const &intern);
	Intern &operator= (Intern const &intern);
	~Intern(void);

	Form *makeForm(std::string const &name, std::string const &target);

	class FormNotKnown : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			const char *str = "I don't known this form!";
			return str;
		}
	};
};

#endif

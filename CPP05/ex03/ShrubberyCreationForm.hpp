/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:27:42 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/03 19:01:55 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm &operator= (ShrubberyCreationForm const &SCF);
public:
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(ShrubberyCreationForm const &SCF);
	virtual ~ShrubberyCreationForm(void);

	virtual void		execute(Bureaucrat const &executor) const;
	virtual void		action(void) const;
	Form				*clone(std::string const &target) const;
};

#endif

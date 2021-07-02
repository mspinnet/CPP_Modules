/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 16:26:37 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/03 16:28:18 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	PresidentialPardonForm(void);
	PresidentialPardonForm &operator= (PresidentialPardonForm const &PPF);
public:
	PresidentialPardonForm(std::string const &target);
	PresidentialPardonForm(PresidentialPardonForm const &PPF);
	virtual ~PresidentialPardonForm(void);

	virtual void		execute(Bureaucrat const &executor) const;
	virtual void		action(void) const;
};

#endif

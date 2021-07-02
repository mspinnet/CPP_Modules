/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 16:09:16 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/03 19:01:46 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	RobotomyRequestForm(void);
	RobotomyRequestForm &operator= (RobotomyRequestForm const &RRF);
public:
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(RobotomyRequestForm const &RRF);
	virtual ~RobotomyRequestForm(void);

	virtual void		execute(Bureaucrat const &executor) const;
	virtual void		action(void) const;
	Form				*clone(std::string const &target) const;
};

#endif

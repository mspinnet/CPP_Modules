/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 14:34:08 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/26 15:29:38 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
# define VICTIM_H

# include <iostream>
# include <string>

class Victim
{
protected:
	std::string	name;
public:
	Victim(void);
	Victim(std::string _name);
	Victim(Victim const &_victim);
	virtual ~Victim(void);
	Victim &operator= (Victim const &_victim);
	std::string const &getName(void) const;
	virtual void	getPolymorphed(void) const;
};

std::ostream	&operator<<(std::ostream &o, Victim const &_victim);

#endif

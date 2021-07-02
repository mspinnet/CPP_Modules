/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 18:34:49 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/26 15:35:49 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
# define SORCERER_H

# include "Victim.hpp"
# include "Peon.hpp"

class Sorcerer
{
private:
	std::string	name;
	std::string	title;
public:
	Sorcerer(void);
	Sorcerer(std::string _name, std::string _title);
	Sorcerer(Sorcerer const &_sorcerer);
	~Sorcerer(void);
	Sorcerer &operator= (Sorcerer const &_sorcerer);
	void	polymorph(Victim const &_victim) const;
	std::string const &getName(void) const;
	std::string const &getTitle(void) const;
};

std::ostream	&operator<<(std::ostream &o, Sorcerer const &_sorcerer);

#endif

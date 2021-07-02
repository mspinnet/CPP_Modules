/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 14:55:47 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/26 15:39:38 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
# define PEON_H

# include "Victim.hpp"

class Peon : public Victim
{
public:
    Peon(void);
	Peon(std::string _name);
	Peon(Peon const &_peon);
	~Peon(void);
	Peon &operator= (Peon const &_peon);
	std::string const &getName(void) const;
	void	getPolymorphed(void) const;
};

#endif

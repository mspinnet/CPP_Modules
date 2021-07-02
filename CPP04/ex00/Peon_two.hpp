/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon_two.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:37:18 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/26 15:38:11 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_TWO_H
# define PEON_TWO_H

# include "Victim.hpp"

class Peon_two : public Victim
{
public:
    Peon_two(void);
	Peon_two(std::string _name);
	Peon_two(Peon_two const &_peon_two);
	~Peon_two(void);
	Peon_two &operator= (Peon_two const &_peon_two);
	std::string const &getName(void) const;
	void	getPolymorphed(void) const;
};

#endif
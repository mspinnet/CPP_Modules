/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 11:05:00 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/01 14:01:26 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

# include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice(void);
	Ice(Ice const &_ice);
	Ice &operator= (Ice const &_ice);
	virtual ~Ice(void);

	virtual AMateria	*clone(void) const;
	virtual void		use(ICharacter &target);
};

#endif

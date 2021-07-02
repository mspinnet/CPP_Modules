/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 12:20:44 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/30 17:28:34 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
# define SQUAD_H

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"
# include "TacticalMarine.hpp"
# include "AssaultTerminator.hpp"

class Squad : public ISquad
{
private:
	int				count;
	ISpaceMarine	**ISM;
public:
	Squad(void);
	Squad(Squad const &sqd);
	Squad &operator= (Squad const &sqd);
	virtual ~Squad(void);

	virtual int	getCount(void) const;
	virtual		ISpaceMarine* getUnit(int n) const;
	virtual int	push(ISpaceMarine *name);
};

#endif

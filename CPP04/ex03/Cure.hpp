/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 11:21:38 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/01 14:01:31 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

# include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure(void);
	Cure(Cure const &_cure);
	Cure &operator= (Cure const &_cure);
	virtual ~Cure(void);

	virtual AMateria	*clone(void) const;
	virtual void		use(ICharacter &target);
};

#endif

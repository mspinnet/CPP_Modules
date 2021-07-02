/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 17:34:18 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/01 13:35:10 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

class ICharacter;
# include "ICharacter.hpp"

class AMateria
{
private:
	std::string		_type;
	unsigned int	_xp;
public:
	AMateria(void);
	AMateria(std::string const &type);
	AMateria(AMateria const &amat);
	AMateria &operator= (AMateria const &amat);
	virtual ~AMateria(void);

	std::string const	&getType(void) const;
	unsigned int		getXP(void) const;
	
	virtual AMateria	*clone(void) const = 0;
	virtual void		use(ICharacter &target);
};

#endif

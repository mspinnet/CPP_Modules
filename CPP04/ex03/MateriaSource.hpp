/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 12:36:35 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/01 12:53:16 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	std::string		_type;
	int				count;
	AMateria		**materia;
public:
	MateriaSource(void);
	MateriaSource(MateriaSource const &MS);
	MateriaSource &operator= (MateriaSource const &MS);
	virtual ~MateriaSource(void);

	virtual void learnMateria(AMateria *m);
	virtual AMateria *createMateria(std::string const &type);
};

#endif

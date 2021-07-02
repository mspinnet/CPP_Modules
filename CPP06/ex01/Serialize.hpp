/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 14:10:09 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/06 16:26:00 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_H
# define SERIALIZE_H

# include <iostream>
# include <string>

struct Data
{
	std::string	*str1;
	int			rand;
	std::string	*str2;
};

class Serialize
{
public:
	Serialize(void);
	Serialize(Serialize const &ser);
	Serialize &operator= (Serialize const &ser);
	~Serialize(void);

	void	*serialize(void);
	Data	*deserialize(void *raw);
};

#endif

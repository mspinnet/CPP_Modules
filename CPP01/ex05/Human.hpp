/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 15:41:30 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/18 18:52:34 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

# include "Brain.hpp"
# include <iostream>
# include <string>

class Human
{
private:
	Brain const brain;
public:
	std::string		identify(void) const;
	const Brain		&getBrain(void) const;
};

#endif

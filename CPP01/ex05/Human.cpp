/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 16:39:24 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/18 18:52:36 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

std::string		Human::identify(void) const
{
	std::string str = brain.identify();
	return (str);
}

const Brain		&Human::getBrain(void) const
{
	return (brain);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 15:06:24 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/17 16:42:44 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

# include <iostream>
# include <string>

class Pony
{
private:
	std::string	_name;
	std::string	_color;
	int			_age;
public:
	Pony(std::string name, std::string color, int age);
	Pony();
	~Pony();
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megathone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 14:06:43 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/15 12:28:21 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main(int argc, char **argv)
{
	int			i;
	int			j;
	std::string str;
	
	i = 0;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (++i < argc)
	{
		j = -1;
		str = argv[i];
		while (str[++j])
		{
			str[j] = toupper(str[j]);
			std::cout << str[j];
		}
	}
	std::cout << std::endl;
	return (0);
}
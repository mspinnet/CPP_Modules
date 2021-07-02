/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 15:26:55 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/18 15:34:42 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::cout << "str: " << str << std::endl;
	std::string &str_ref = str;
	std::cout << "str_ref: " << str_ref << std::endl;
	std::string *str_ptr = &str;
	std::cout << "str_ptr: " << *str_ptr << std::endl;
	return (0);
}

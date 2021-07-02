/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 12:31:25 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/08 16:50:29 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int		array1[] = {1, 2, 3, 4, 5};
	Awesome	array2[5];
	double	array3[] = {1.25, 3.24, 2.3, 5.0, 9.321};
	std::string array4[] = {"Bob", "Max", "Elly", "Din", "Jonny"};
	::iter(array1, 5, ::ft_print);
	::iter(array2, 5, ::ft_print);
	::iter(array3, 5, ::ft_print);
	::iter(array4, 5, ::ft_print);
	return (0);
}

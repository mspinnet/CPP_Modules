/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 17:14:22 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/08 12:15:14 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void )
{
	int a = 2;
	int b = 3;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;

	Awesome awes(2);
	Awesome awes2(4);
	::swap(awes, awes2);
	std::cout << "awes = " << awes.getN() << ", awes2 = " << awes2.getN() << std::endl;
	std::cout << "min( awes, awes2 ) = " << ::min(awes, awes2).getN() << std::endl;
	std::cout << "max( awes, awes2 ) = " << ::max(awes, awes2).getN() << std::endl;
	return 0;
}

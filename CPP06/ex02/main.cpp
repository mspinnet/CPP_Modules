/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 17:16:52 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/06 18:36:07 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base	*generate(void)
{
	int i = rand() % 3;
	Base *gen;
	
	if (i == 0)
	{
		gen = new A;
		std::cout << "Generate:  A!" << std::endl;
	}
	if (i == 1)
	{
		gen = new B;
		std::cout << "Generate:  B!" << std::endl;
	}
	if (i == 2)
	{
		gen = new C;
		std::cout << "Generate:  C!" << std::endl;
	}
	return gen;
}

void	identify_from_pointer(Base *p)
{
	A *a = dynamic_cast<A*>(p);
	B *b = dynamic_cast<B*>(p);
	C *c = dynamic_cast<C*>(p);

	if (a != 0)
		std::cout << "A" << std::endl;
	if (b != 0)
		std::cout << "B" << std::endl;
	if (c != 0)
		std::cout << "C" << std::endl;
	return;
}

void	identify_from_reference(Base &p)
{
	A a;
	B b;
	C c;
	int	_a = 0;
	int _b = 0;
	int _c = 0;
	try
	{
		a = dynamic_cast<A&>(p);
	}
	catch(const std::exception& e)
	{
		_a = 1;
	}
	try
	{
		b = dynamic_cast<B&>(p);
	}
	catch(const std::exception& e)
	{
		_b = 1;
	}
	try
	{
		c = dynamic_cast<C&>(p);
	}
	catch(const std::exception& e)
	{
		_c = 1;
	}
	if (_a == 0)
		std::cout << "A" << std::endl;
	if (_b == 0)
		std::cout << "B" << std::endl;
	if (_c == 0)
		std::cout << "C" << std::endl;
	return;
}

int		main(void)
{
	std::srand(time(NULL));

	for (int i = 1; i <= 3; i++)
	{
		std::cout << "*** Test " << i << " ***" << std::endl;
		Base *p = generate();
		std::cout << "Pointer:   ";
		identify_from_pointer(p);
		std::cout << "Reference: ";
		identify_from_reference(*p);
		delete p;
	}
	return (0);
}

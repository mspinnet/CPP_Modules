/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 15:31:39 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/09 17:42:24 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void)
{
	return;
}

Span::Span(unsigned int N) : _N(N)
{
	return;
}

Span::Span(Span const &rhs)
{
	*this = rhs;
	return;
}

Span &Span::operator= (Span const &rhs)
{
	if (this != &rhs)
	{
		this->_N = rhs._N;
		this->_array = rhs._array;
	}
	return *this;
}

Span::~Span(void)
{
	return;
}

void	Span::addNumber(int num)
{
	if (_array.size() < _N)
		_array.push_back(num);
	else
		throw Span::MyException();
	return;
}

int		Span::shortestSpan(void)
{	
	if (_array.size() > 1)
	{
		std::sort(_array.begin(), _array.end());
		int	min_diff = _array[1] - _array[0];
		for (int i = 2; i != (int)_array.size(); i++)
			min_diff = fmin(min_diff, _array[i] - _array[i - 1]);
		return (min_diff);
	}
	else
		throw Span::MyException();
}

int		Span::longestSpan(void)
{
	if (_array.size() > 1)
	{
		std::sort(_array.begin(), _array.end());
		return (_array[_array.size() - 1] - _array[0]);
	}
	else
		throw Span::MyException();
}

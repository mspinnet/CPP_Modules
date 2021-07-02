/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 14:11:00 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/08 18:03:10 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void)
{
	_n = 0;
	_array = 0;
	return;
}

template <typename T>
Array<T>::Array(unsigned int n) : _n(n)
{
	_array = new T[n]();
	return;
}

template <typename T>
Array<T>::Array(Array<T> const &rhs)
{
	_n = rhs._n;
	_array = new T[rhs._n];
	for (unsigned int i = 0; i < rhs._n; i++)
		_array[i] = rhs._array[i];
	return;
}

template <typename T>
Array<T> &Array<T>::operator= (Array<T> const &rhs)
{
	if (this == &rhs)
		return *this;
	_n = rhs._n;
	delete[] _array;
	_array = new T[rhs._n];
	for (unsigned int i = 0; i < rhs._n; i++)
		_array[i] = rhs._array[i];
	return *this;
}

template <typename T>
Array<T>::~Array(void)
{
	delete[] _array;
	return;
}

template <typename T>
unsigned int	Array<T>::size(void)
{
	return this->_n;
}

template <typename T>
T &Array<T>::operator[](int i)
{
	if (i >= (int)_n || i < 0)
		throw Array<T>::OutOfLimits();
	return this->_array[i];
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 13:07:03 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/10 14:49:24 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template <typename T>
MutantStack<T>::MutantStack(void)
{
	_begin = 0;
	return;
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &)
{
	return;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack const &)
{
	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack(void)
{
	return;
}

template <typename T>
MutantStack<T>::iterator::iterator(void)
{
	_cur_pos = 0;
	_start = 0;
	_finish = 0;
	return;
}

template <typename T>
MutantStack<T>::iterator::iterator(T *start, T *finish) : _cur_pos(start), _start(start), _finish(finish)
{
	return;
}

template <typename T>
MutantStack<T>::iterator::iterator(iterator const &iter)
{
	*this = iter;
	return;
}

template <typename T>
MutantStack<T>::iterator::~iterator(void)
{
	return;
}

template <typename T>
typename MutantStack<T>::iterator &MutantStack<T>::iterator::operator=(iterator const &iter)
{
	if (this != &iter)
	{
		_cur_pos = iter._cur_pos;
		_start = iter._start;
		_finish = iter._finish;
	}
	return *this;
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void)
{
	return (MutantStack<T>::iterator(_begin, _end));
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void)
{
	return (MutantStack<T>::iterator(_end, _begin));
}

template <typename T>
void	MutantStack<T>::push(T element)
{
	std::stack<T>::push(element);
	if (_begin == 0)
		_begin = &std::stack<T>::top();
	_end = &std::stack<T>::top() + 1;
	return;
}

template <typename T>
void	MutantStack<T>::pop(void)
{
	std::stack<T>::pop();
	_end = &std::stack<T>::top() + 1;
	return;
}

template <typename T>
T	&MutantStack<T>::iterator::operator*(void)
{
	return *_cur_pos;
}

template <typename T>
typename MutantStack<T>::iterator	&MutantStack<T>::iterator::operator++(void)
{
	if (_cur_pos + 1 > _finish)
		throw MutantStack<T>::MyException();
	_cur_pos++;
	return *this;
}

template <typename T>
typename MutantStack<T>::iterator	&MutantStack<T>::iterator::operator--(void)
{
	if (_cur_pos - 1 < _start)
		throw MutantStack<T>::MyException();
	_cur_pos--;
	return *this;
}

template <typename T>
bool	MutantStack<T>::iterator::operator==(iterator const &iter) const
{
	return (_cur_pos == iter._cur_pos);
}

template <typename T>
bool	MutantStack<T>::iterator::operator!=(iterator const &iter) const
{
	return (_cur_pos != iter._cur_pos);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 16:57:31 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/08 12:15:16 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

# include <iostream>
# include <string>

template <typename T>
const T &max(const T &a, const T &b)
{
	return (a <= b) ? b : a;
}

template <typename T>
const T &min(const T &a, const T &b)
{
	return (a >= b) ? b : a;
}

template <typename T>
void	swap(T &a, T &b)
{
	T c = a;
	a = b;
	b = c;
}

class Awesome
{
	private:
		int _n;
	public:
		Awesome(int n) : _n(n) {}
		bool	operator==(Awesome const &rhs) const { return (this->_n == rhs._n); }
		bool	operator!=(Awesome const &rhs) const { return (this->_n != rhs._n); }
		bool	operator>(Awesome const &rhs) const { return (this->_n > rhs._n); }
		bool	operator<(Awesome const &rhs) const { return (this->_n < rhs._n); }
		bool	operator>=(Awesome const &rhs) const { return (this->_n >= rhs._n); }
		bool	operator<=(Awesome const &rhs) const { return (this->_n <= rhs._n); }
		int		getN(void) const { return this->_n; }
};

#endif

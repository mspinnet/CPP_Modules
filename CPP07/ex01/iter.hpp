/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 12:15:47 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/08 16:50:33 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

# include <iostream>
# include <string>

class Awesome
{
	private:
		int _n;
	public:
		Awesome(void) : _n(42) { return; }
		int	get(void) const { return this->_n; }
};

template <typename T>
void	ft_print(T const &a)
{
	std::cout << a << std::endl;
	return;
}

template <typename T>
void	iter(T *array, int length, void f(T const &a))
{
	for (int i = 0; i < length; i++)
		f(array[i]);
	return;
}

std::ostream	&operator<<(std::ostream &o, Awesome const &rhs) { o << rhs.get(); return o; }

#endif

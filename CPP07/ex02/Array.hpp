/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 13:03:23 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/08 17:54:47 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>
# include <exception>

template <class T>
class Array
{
	private:
		unsigned int	_n;
		T *_array;
	public:
		Array(void);
		Array(unsigned int n);
		Array(Array const &rhs);
		Array &operator= (Array const &rhs);
		~Array(void);

		unsigned int		size(void);
		T					&operator[](int i);
		class OutOfLimits : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					const char *str = "This element is out of the limits!";
					return str;
				}
		};
};

#endif

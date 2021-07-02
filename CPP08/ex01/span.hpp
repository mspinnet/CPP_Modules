/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 14:21:13 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/09 17:52:37 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

# include <iostream>
# include <vector>
# include <exception>
# include <algorithm>
# include <math.h>

class Span
{
	private:
		unsigned int		_N;
		std::vector<int>	_array;
		Span(void);
	public:
		Span(unsigned int N);
		Span(Span const &rhs);
		Span &operator= (Span const &rhs);
		~Span(void);

		void	addNumber(int num);
		int		shortestSpan(void);
		int		longestSpan(void);
		
		template<typename T>
		void	addNumbers(typename T::iterator start, typename T::iterator end)
		{
			if (_array.size() < _N)
			{
				for (typename T::iterator it = start; it != end; it++)
				{
					_array.push_back(*it + rand());
				}
			}
			else
				throw Span::MyException();
			return;
		}

		class MyException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					const char *str = "Exception!";
					return str;
				}
		};
};

#endif

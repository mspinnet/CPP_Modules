/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 12:31:46 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/10 14:49:21 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <iostream>
# include <stack>
# include <algorithm>
# include <exception>

template <typename T>
class MutantStack : public std::stack<T>
{
	private:
		T *_begin;
		T *_end;
	public:
		MutantStack(void);
		MutantStack(MutantStack const &);
		MutantStack &operator= (MutantStack const &);
		~MutantStack(void);

		class iterator
		{
			private:
				T *_cur_pos;
				T *_start;
				T *_finish;
			public:
				iterator(void);
				iterator(T *start, T *finish);
				iterator(iterator const &iter);
				iterator &operator= (iterator const &iter);
				~iterator(void);

				T			&operator*(void);
				iterator	&operator++(void);
				iterator	&operator--(void);
				bool operator!= (iterator const &iter) const;
				bool operator== (iterator const &iter) const;
		};
		
		class MyException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					const char *str = "Exception!";
					return str;
				}
		};
		
		iterator	begin(void);
		iterator	end(void);
		void		pop(void);
		void		push(T element);	
};

#endif

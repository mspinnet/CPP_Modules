/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 12:47:47 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/09 14:14:32 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

# include <iostream>
# include <algorithm>
# include <exception>

template <typename T>
typename T::const_iterator const	easyfind(T const &dst, int src)
{
	typename T::const_iterator it;
	it = std::find(dst.begin(), dst.end(), src);
	if (it != dst.end())
		return it;
	else
		throw std::exception();
}

#endif

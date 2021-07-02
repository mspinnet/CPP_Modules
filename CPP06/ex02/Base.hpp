/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 17:10:02 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/06 17:15:09 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_H
# define BASE_H

# include <iostream>
# include <string>

class Base
{
public:
	virtual ~Base(void)
	{
		return;
	}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif

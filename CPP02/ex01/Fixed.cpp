/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 13:09:12 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/20 15:29:11 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : fixed_point(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	fixed_point = n << num;
	return ;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	fixed_point = roundf(f * (1 << num));
	return ;
}

Fixed::Fixed(Fixed const &fix)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fix;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int		Fixed::getRawBits(void) const
{
	return this->fixed_point;
}

void	Fixed::setRawBits(const int raw)
{
	fixed_point = raw;
	return ;
}

int		Fixed::toInt(void) const
{ 
	return (fixed_point >> num);
}

float	Fixed::toFloat(void) const
{
	return ((float)fixed_point / (float)(1 << num));
}

Fixed &Fixed::operator= (Fixed const &fix)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &fix)
		this->fixed_point = fix.getRawBits();
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fix)
{
	o << fix.toFloat();
	return o;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:20:39 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/06 12:43:42 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

void 	to_char(int i)
{
	char	c;

	if (i < -128 || i > 127)
	{
		std::cout << "char: impossible" << std::endl;
		return;
	}
	if ((i >= 48 && i <= 57) || i <= 32 || i > 126)
	{
		std::cout << "char: Non displayable" << std::endl;
		return;
	}
	c = static_cast<char>(i);
	std::cout << "char: '" << c << "'" << std::endl;
}

void	to_int(int i)
{
	std::cout << "int: " << i << std::endl;
}

void	to_double(double d)
{
	std::cout << "double: " << d << std::endl;
}

void	to_float(float f)
{
	std::cout << "float: " << f << "f" << std::endl;
}

void	no_char_int(std::string &str)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << std::stof(str) << "f" << std::endl;
	std::cout << "double: " << std::stod(str) << std::endl;
	exit(0);
}

void	parser(std::string &str)
{
	char	c;
	int		i;
	double	d;
	float	f;
	
	if (str == "-inff" || str == "+inff" || str == "nanf" || str == "nan" || str == "-inf" || str == "+inf")
		no_char_int(str);
	if (str.length() == 1)
	{
		c = static_cast<char>(str[0]);
		if (c >= 48 && c <= 57)
			i = std::stoi(str);
		else
			i = static_cast<int>(c);
		to_char(i);
		to_int(i);
		to_float(static_cast<float>(i));
		to_double(static_cast<double>(i));
	}
	else
	{
		i = 0;
		if (str[i] == '+' || str[i] == '-')
			i++;
		while (isdigit(str[i]) && str[i])
			i++;
		if (str[i] == '\0')
		{
			try
			{
				i = std::stoi(str);
			}
			catch(const std::exception& e)
			{
				no_char_int(str);
			}
			to_char(i);
			to_int(i);
			to_float(static_cast<float>(i));
			to_double(static_cast<double>(i));
			return;
		}
		if (str[i] == '.')
			i++;
		if (isdigit(str[i]))
			while (isdigit(str[i]) && str[i])
				i++;
		else
		{
			std::cout << "Error argument!" << std::endl;
			return;
		}
		if (str[i] == '\0')
		{
			d = std::stod(str);
			if (d > INT_MAX || d < INT_MIN)
				no_char_int(str);
			to_char(static_cast<int>(d));
			to_int(static_cast<int>(d));
			to_float(static_cast<float>(d));
			to_double(d);
			return;
		}
		if (str[i] == 'f' && str[i + 1] == '\0')
		{
			f = std::stof(str);
			if (static_cast<double>(f) > INT_MAX || static_cast<double>(f) < INT_MIN)
				no_char_int(str);
			to_char(static_cast<int>(f));
			to_int(static_cast<int>(f));
			to_float(f);
			to_double(static_cast<double>(f));
			return;
		}
		std::cout << "Error argument!" << std::endl;
	}
	return;
}

int		main(int argc, char **argv)
{
	if (argc > 2)
	{
		std::cout << "Error argument!" << std::endl;
		return (0);
	}
	std::string str = argv[1];
	parser(str);
	return (0);
}

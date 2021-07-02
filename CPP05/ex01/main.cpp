/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:15:36 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/03 16:30:56 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try
	{
		// Form		form("form", 0, 12);

		Bureaucrat	bur1("bur1", 10);
		Form		form1("form1", 11, 11);
		bur1.signForm(form1);
		std::cout << bur1 << form1;

		Bureaucrat	bur2("bur2", 15);
		Form		form2("form2", 10, 10);
		std::cout << bur2 << form2;
		bur2.signForm(form2);
		form2.beSigned(bur2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:49:51 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/03 16:49:26 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("", 21, 21, "")
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form("ShrubberyCreationForm", 145, 137, target)
{
	std::cout << "ShrubberyCreationForm is create!" << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &SCF) : Form(SCF)
{
	return;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator= (ShrubberyCreationForm const &)
{
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm destroyed!" << std::endl;
	return;
}

void	ShrubberyCreationForm::action(void) const
{
	std::string file_name = this->getTarget() + "_shrubbery";
	std::ofstream	outfile(file_name);
	if (!outfile)
	{
		std::cout << "File " << file_name << " couldn't be opened!!!" << std::endl;
		return;
	}
	for (int i = 0; i < 2; i++)
	{
		outfile << "___________******_********" << std::endl;
		outfile << "__________*_____**________*" << std::endl;
		outfile << "________***_______________ *******" << std::endl;
		outfile << "________*_______________________***" << std::endl;
		outfile << "_______ **____*__________________ *" << std::endl;
		outfile << "______***____*********____________***" << std::endl;
		outfile << "______**______*****_______ **_______**_**" << std::endl;
		outfile << "_____******_______________**__*_**___******" << std::endl;
		outfile << "___***__****__***_________*******____**___***" << std::endl;
		outfile << "___*______***_*_*__*__*_***________________***" << std::endl;
		outfile << "__ *________*_*_**********_**________________**" << std::endl;
		outfile << "___**____****_*_***_****_*_**********________**" << std::endl;
		outfile << "__****___********___***_*__***____****______***" << std::endl;
		outfile << "_***_*****_******_**_***____********________***" << std::endl;
		outfile << "**_____***__**_*****__**___******_*_____***___**" << std::endl;
		outfile << "*_____***___*_*_***___**_**__*__*****__***_____**" << std::endl;
		outfile << "**___******_***___*____***__****************____*" << std::endl;
		outfile << "_**__************_***__**__*******__****__*____***" << std::endl;
		outfile << "__ ****_____*_***______**___**_____***_________*" << std::endl;
		outfile << "____________***__**_____*___***_***********___**" << std::endl;
		outfile << "___*****************_**_**_*********************" << std::endl;
		outfile << "__ *_____*****___***_**__****___***________***" << std::endl;
		outfile << "__ **____**_______**_**___****_*****_____***" << std::endl;
		outfile << "__ *_____*___*_***_*_**___**_***__***____**" << std::endl;
		outfile << "__ **_______****__**______ *________******" << std::endl;
		outfile << "___*__*******_____*___***__*__________***" << std::endl;
		outfile << "___*********_____**__*****_**" << std::endl;
		outfile << "________________**___****___**" << std::endl;
		outfile << "_______________**____****___**" << std::endl;
		outfile << "____________****_____**_____**" << std::endl;
		outfile << "___________ **_______**_____**" << std::endl;
		outfile << "__________***___**___**_____**" << std::endl;
		outfile << "________****____**___*______**" << std::endl;
		outfile << "______ *****____*______**____**" << std::endl;
		outfile << "_____********_***_*____**_*___**" << std::endl;
		outfile << "___***********K*******************" << std::endl;
		outfile << "__ **************_******____*****_***" << std::endl;
		outfile << std::endl;
	}
	return;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->getSign() == false)
	{
		std::cout << this->getName() << " not signed!" << std::endl;
		return;
	}
	if (executor.getGrade() > this->getGradeToExecute())
		throw ShrubberyCreationForm::GradeTooLowException();
	else
	{
		std::cout << "Bureaucrat " << executor.getName() << " executes " << this->getName() << std::endl;
		this->action();
	}
	return;
}

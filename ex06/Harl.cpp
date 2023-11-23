/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 01:16:25 by niceguy           #+#    #+#             */
/*   Updated: 2023/11/23 16:34:49 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Harl default constructor" << std::endl;
	funcPointers[DEBUG] = &Harl::debug;
	funcPointers[INFOS] = &Harl::infos;
	funcPointers[WARNING] = &Harl::warning;
	funcPointers[ERROR] = &Harl::error;

	funcNames[DEBUG] = "DEBUG";
	funcNames[INFOS] = "INFOS";
	funcNames[WARNING] = "WARNING";
	funcNames[ERROR] = "ERROR";
}

void Harl::complain (std::string level)
{
	size_t	i;

	i = 0;
	while (i < MAX_FUNCS)
	{
		if (funcNames[i] == level)
			break;
		i++;
	}
	switch (i)
	{
		case DEBUG:
			(this->*funcPointers[DEBUG])();
		case INFOS:
			(this->*funcPointers[INFOS])();
		case WARNING:
			(this->*funcPointers[WARNING])();
		case ERROR:
			(this->*funcPointers[ERROR])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl ;
	}
}

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::infos(void)
{
	std::cout << "[ INFOS ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
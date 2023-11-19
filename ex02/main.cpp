/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:47:08 by niceguy           #+#    #+#             */
/*   Updated: 2023/11/19 16:54:19 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "string adress " << &str << std::endl;
	std::cout << "adress help by pointer " << stringPTR << std::endl;
	std::cout << "adress help by reference " << &stringREF << std::endl;

	std::cout << "string value " << str << std::endl;
	std::cout << "pointer's value " << *stringPTR << std::endl;
	std::cout << "reference's value " << stringREF << std::endl;
}
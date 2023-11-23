/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:47:08 by niceguy           #+#    #+#             */
/*   Updated: 2023/11/23 16:54:38 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "string adress " << &str << std::endl;
	std::cout << "adress held by pointer " << stringPTR << std::endl;
	std::cout << "adress held by reference " << &stringREF << std::endl;

	std::cout << "string value " << str << std::endl;
	std::cout << "pointer's value " << *stringPTR << std::endl;
	std::cout << "reference's value " << stringREF << std::endl;
}
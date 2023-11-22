/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:11:40 by evallee-          #+#    #+#             */
/*   Updated: 2023/11/21 19:33:01 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
	(void)argv;
	if (argc < 4)
		return 0;
	std::string		path;
	std::ofstream	target;
	std::ofstream	copy;

	path = argv[1];
	target.open(path);
	if (target.is_open())
	{
		copy.open(path + ".replace");
		while(!target.eof())
		{
			/*target
			copy << getline*/
		}
		copy.close();
		target.close();
	}
	else
		std::cout << "Unable to open file" << std::endl;
	return 0;
}
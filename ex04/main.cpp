/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:11:40 by evallee-          #+#    #+#             */
/*   Updated: 2023/11/22 01:02:11 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
	if (argc < 4)
		return 0;
	std::string		path;
	std::string		path_copy;
	std::string		line;
	std::ifstream	target;
	std::ofstream	copy;

	path = argv[1];
	target.open(path.c_str());
	if (target.is_open())
	{
		path_copy = path + ".replace";
		copy.open(path_copy.c_str());
		if (!copy.is_open())
			return 1;
		while(true)
		{
			std::getline(target, line);
			if (line == argv[2])
				line = argv[3];
			copy << line;
			if (!target.eof())
				copy << std::endl;
			else
				break;
		}
		copy.close();
		target.close();
	}
	else
		std::cout << "Unable to open file" << std::endl;
	return 0;
}
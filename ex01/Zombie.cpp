/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 23:14:26 by niceguy           #+#    #+#             */
/*   Updated: 2023/11/19 16:42:19 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(const std::string name)
{
	_name = name;
}

Zombie::Zombie()
{
	std::cout << "Contructed Zombie " << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Destroyed Zombie named " << _name << std::endl;
}

void Zombie::SetName(const std::string name)
{
	_name = name;
}

void Zombie::Announce(void) const
{
	std::cout << _name << ": " << ZOMBIE_MSG << std::endl;
}
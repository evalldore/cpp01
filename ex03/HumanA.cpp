/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:01:51 by evallee-          #+#    #+#             */
/*   Updated: 2023/11/21 19:10:09 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(void)
{
	std::cout << "Human A default constructor" << std::endl;
}

HumanA::HumanA(const std::string name, Weapon& weapon)
{
	HumanA();
	this->_name = name;
	this->_weapon = &weapon;
}

void HumanA::attack() const
{
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}
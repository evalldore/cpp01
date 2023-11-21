/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:01:51 by evallee-          #+#    #+#             */
/*   Updated: 2023/11/21 18:57:50 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB()
{
	std::cout << "Human B default constructor" << std::endl;
	this->_weapon = NULL;
}

HumanB::HumanB(const std::string name)
{
	HumanB();
	this->_name = name;
}

void HumanB::attack() const
{
	if (_weapon)
		std::cout << _name << "attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}
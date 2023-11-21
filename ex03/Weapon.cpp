/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:56:57 by evallee-          #+#    #+#             */
/*   Updated: 2023/11/21 18:33:05 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	std::cout << "Weapon default constructor" << std::endl;
}

Weapon::Weapon(std::string type)
{
	Weapon();
	this->_type = type;
}

const std::string Weapon::getType(void) const {return (this->_type);}
void Weapon::setType(std::string type) {this->_type = type;}
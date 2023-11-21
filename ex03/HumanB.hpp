/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:00:27 by niceguy           #+#    #+#             */
/*   Updated: 2023/11/21 18:57:30 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public :
		HumanB(void);
		HumanB(const std::string name);
		void attack(void) const;
		void setWeapon(Weapon& weapon);
	private :
		std::string	_name;
		Weapon*		_weapon;
};

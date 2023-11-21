/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:03:26 by niceguy           #+#    #+#             */
/*   Updated: 2023/11/21 18:57:25 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	public :
		HumanA(void);
		HumanA(const std::string name, Weapon& weapon);
		void attack(void) const;
	private :
		std::string _name;
		Weapon*		_weapon;
};

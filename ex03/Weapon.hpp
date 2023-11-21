/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:55:01 by evallee-          #+#    #+#             */
/*   Updated: 2023/11/21 18:46:00 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Weapon {

	public:
		Weapon(void);
		Weapon(std::string type);
		const std::string getType(void) const;
		void setType(std::string type);
	private:
		std::string _type;
};
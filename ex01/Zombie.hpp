/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 23:09:23 by niceguy           #+#    #+#             */
/*   Updated: 2023/11/19 16:42:28 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#define ZOMBIE_MSG "BraiiiiiiinnnzzzZ...\n"
class	Zombie
{
	public:
		Zombie();
		Zombie(const std::string name);
		~Zombie(void);
		void Announce(void) const;
		void SetName(const std::string name);
	private:
		std::string _name;
};

Zombie*		zombieHorde(int N, std::string name);
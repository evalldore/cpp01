/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 23:09:23 by niceguy           #+#    #+#             */
/*   Updated: 2023/11/19 16:20:50 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#define ZOMBIE_MSG "BraiiiiiiinnnzzzZ...\n"
class	Zombie
{
	public:
		Zombie(const std::string name);
		~Zombie(void);
		void Announce(void);
	private:
		std::string _name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
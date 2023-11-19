/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:28:35 by niceguy           #+#    #+#             */
/*   Updated: 2023/11/19 16:41:14 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*		zombieHorde(int N, std::string name)
{
	Zombie*		array;
	int			i;

	array = new Zombie[N];
	for (i = 0; i < N; i++)
		array[i].SetName(name);
	return (&array[0]);
}
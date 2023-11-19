/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 23:08:51 by niceguy           #+#    #+#             */
/*   Updated: 2023/11/19 16:41:19 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#define NUM_ZOMBIES 10

int	main(void)
{
	Zombie*		array;
	int			i;

	array = zombieHorde(NUM_ZOMBIES, "Stubbs");
	for (i = 0; i < NUM_ZOMBIES; i++)
		array[i].Announce();
	delete[] array;
	return (0);
}
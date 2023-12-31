/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 01:12:26 by niceguy           #+#    #+#             */
/*   Updated: 2023/11/23 16:31:38 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	h;

	if (argc < 2)
		return (0);
	h.complain(argv[1]);
	return (0);
}
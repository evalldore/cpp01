/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 01:13:08 by niceguy           #+#    #+#             */
/*   Updated: 2023/11/22 16:19:18 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

enum e_funcs
{
	DEBUG,
	INFOS,
	WARNING,
	ERROR,
	MAX_FUNCS
};

class Harl {

	private :
		void debug(void);
		void infos(void);
		void warning(void);
		void error(void);

		void (Harl::*funcPointers[MAX_FUNCS])(void);
		std::string funcNames[MAX_FUNCS];
	public:
		Harl(void);

		void complain (std::string level);
};
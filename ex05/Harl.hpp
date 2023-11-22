/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 01:13:08 by niceguy           #+#    #+#             */
/*   Updated: 2023/11/22 01:17:41 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Harl {

	public:
		Harl(void);

		void complain (std::string level);
	private :
		void debug(void);
		void infos(void);
		void warning(void);
		void error(void);
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/04 11:47:11 by laura         #+#    #+#                 */
/*   Updated: 2023/12/04 11:47:11 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP03_FRAGTRAP_H
#define CPP03_FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap : public ClapTrap {
	private:

	public:
		explicit FragTrap(std::string new_name);
		~FragTrap();
		FragTrap(FragTrap &cp) = default;
		FragTrap &operator=(const FragTrap &cp);
		void highFivesGuys();
		void attack(const std::string &target);
	};

#endif //CPP03_FRAGTRAP_H

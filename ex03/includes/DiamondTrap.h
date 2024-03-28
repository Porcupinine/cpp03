/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/04 15:37:30 by laura         #+#    #+#                 */
/*   Updated: 2023/12/04 15:37:30 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP03_DIAMONDTRAP_H
#define CPP03_DIAMONDTRAP_H

#include "FragTrap.h"
#include "ScavTrap.h"

class DiamondTrap : public FragTrap, public ScavTrap {
	private:
		std::string m_name;
	public:
		explicit DiamondTrap(const std::string& new_name);
		virtual ~DiamondTrap();
		DiamondTrap(DiamondTrap& cp);
		DiamondTrap& operator=(const DiamondTrap& cp);
		void attack(const std::string &target);
		void whoAmI();
};


#endif //CPP03_DIAMONDTRAP_H

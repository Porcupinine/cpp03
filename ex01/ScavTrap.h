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

#ifndef CPP03_SCAVTRAP_H
#define CPP03_SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : public ClapTrap {
	private:

	public:
		explicit ScavTrap(std::string new_name);
		~ScavTrap();
		ScavTrap(ScavTrap& cp) = default;
		ScavTrap& operator=(const ScavTrap& cp);
		void guardGate();
};


#endif //CPP03_SCAVTRAP_H

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/04 10:23:10 by laura         #+#    #+#                 */
/*   Updated: 2023/12/04 10:23:10 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP03_CLAPTRAP_H
#define CPP03_CLAPTRAP_H

#include <string>

class ClapTrap {
	protected:
		std::string	m_name;
		size_t		m_hitPoints{10};
		size_t		m_energyPoints{10};
		size_t 		m_attackDamage{0};
	public:
		explicit ClapTrap(std::string new_name);
		~ClapTrap();
		ClapTrap(ClapTrap& cp);
		ClapTrap& operator=(const ClapTrap& cp);
		void attack(const std::string& target);
		void my_attack(ClapTrap& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName() const;
		size_t getHitPoints() const;
		size_t getEnergyPoints() const;
		size_t getAttackDamage() const;
		void printStatus() const;
};


#endif //CPP03_CLAPTRAP_H

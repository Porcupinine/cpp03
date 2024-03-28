/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/04 15:37:39 by laura         #+#    #+#                 */
/*   Updated: 2023/12/04 15:37:39 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/DiamondTrap.h"

DiamondTrap::DiamondTrap(const std::string& new_name) : ClapTrap(new_name + "_clap_name"), FragTrap(new_name), ScavTrap(new_name), m_name(new_name){
	m_hitPoints = FragTrap::m_hitPoints;
	m_energyPoints = ScavTrap::m_energyPoints;
	m_attackDamage = FragTrap::m_attackDamage;
	std::cout<<"DiamondTrap "<< new_name <<" is ready!\n";
}

DiamondTrap::~DiamondTrap() {
	std::cout<<"DiamondTrap "<< m_name <<" is now waste!\n";
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	if(m_hitPoints == 0) {
		std::cout<<"Dead body, duh!\n";
		return;
	}
	std::cout<<m_name<<": is just star dust!\n";
}

DiamondTrap::DiamondTrap(DiamondTrap &cp) : ClapTrap(cp.m_name + "_clap_name"), FragTrap(cp.m_name), ScavTrap(cp.m_name){
	m_hitPoints = cp.m_hitPoints;
	m_energyPoints = cp.m_energyPoints;
	m_attackDamage = cp.m_attackDamage;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &cp) {
	m_hitPoints = cp.m_hitPoints;
	m_name = cp.m_name;
	m_energyPoints = cp.m_energyPoints;
	m_attackDamage = cp.m_attackDamage;
	return *this;
}

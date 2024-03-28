/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/04 11:47:00 by laura         #+#    #+#                 */
/*   Updated: 2023/12/04 11:47:00 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.h"
#include <iostream>
#include <utility>

ScavTrap::ScavTrap(std::string new_name) : ClapTrap(std::move(new_name)) {
	std::cout<<"ScavTrap "<< getName() <<" is ready!\n";
	m_hitPoints = 100;
	m_energyPoints = 50;
	m_attackDamage = 20;
}

ScavTrap::~ScavTrap() {
	std::cout<<"ScavTrap "<<getName()<<" is now waste!\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &cp) {
	m_hitPoints = cp.m_hitPoints;
	m_name = cp.m_name;
	m_energyPoints = cp.m_energyPoints;
	m_attackDamage = cp.m_attackDamage;
	return *this;
}

ScavTrap::ScavTrap(ScavTrap& cp) : ClapTrap(cp.m_name) {
	m_hitPoints = cp.m_hitPoints;
	m_energyPoints = cp.m_energyPoints;
	m_attackDamage = cp.m_attackDamage;
}

void ScavTrap::guardGate() {
	if(m_hitPoints == 0) {
		std::cout<<"Dead machines can't watch over anything!\n";
		return;
	}
	std::cout<<getName()<<": YOU SHALL NOT PASS!!\n";
}

void ScavTrap::attack(const std::string &target) {
	if(m_energyPoints == 0) {
		std::cout<<"ScavTrap has no mana. No mana, no attack!\n";
		return;
	}
	if(m_hitPoints == 0) {
		std::cout<<"ScavTrap is not a Zombie, for Zombies see cpp02\n";
		return;
	}
	std::cout <<"ScavTrap"<< m_name << " attacks " << target << " with " << m_attackDamage << " damage\n";
	m_energyPoints--;}


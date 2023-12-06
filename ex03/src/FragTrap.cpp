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

#include "../includes/FragTrap.h"
#include <iostream>
#include <utility>

FragTrap::FragTrap(std::string new_name) : ClapTrap(std::move(new_name)) {
	std::cout<<"FragTrap "<< getName() <<" is ready!\n";
	m_hitPoints = 100;
	m_energyPoints = 100;
	m_attackDamage = 30;
}

FragTrap::~FragTrap() {
	std::cout<<"FragTrap "<<getName()<<" is now waste!\n";
}

FragTrap &FragTrap::operator=(const FragTrap &cp) {
	return *this;
}

void FragTrap::highFivesGuys() {
	if(m_hitPoints == 0) {
		std::cout<<"Dead machines can't hi5!\n";
		return;
	}
	std::cout<<m_name<<": HI 5!!!\n";
}

void FragTrap::attack(const std::string &target) {
	if(m_energyPoints == 0) {
		std::cout<<"FragTrap has no mana. No mana, no attack!\n";
		return;
	}
	if(m_hitPoints == 0) {
		std::cout<<"FragTrap is not a Zombie, for Zombies see cpp02\n";
		return;
	}
	std::cout <<"FragTrap "<< m_name << " attacks " << target << " with " << m_attackDamage << " damage\n";
	m_energyPoints--;}

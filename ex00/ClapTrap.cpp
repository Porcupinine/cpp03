/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/04 10:46:02 by laura         #+#    #+#                 */
/*   Updated: 2023/12/04 10:46:02 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

#include <iostream>
#include <utility>

ClapTrap::ClapTrap(std::string new_name) : m_name(std::move(new_name)) {
	std::cout << "ClapTrap " << m_name << " is ready!\n";
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << m_name << " is waste now!\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &cp) {
	m_name = cp.m_name;
	m_hitPoints = cp.m_hitPoints;
	m_energyPoints = cp.m_energyPoints;
	m_attackDamage = cp.m_attackDamage;
	return *this;
}

ClapTrap::ClapTrap(ClapTrap& cp) {
	m_name = cp.m_name;
	m_hitPoints = cp.m_hitPoints;
	m_energyPoints = cp.m_energyPoints;
	m_attackDamage = cp.m_attackDamage;
}

void ClapTrap::attack(const std::string &target) {
	if(m_energyPoints == 0) {
		std::cout<<"No mana, no attack!\n";
		return;
	}
	if(m_hitPoints == 0) {
		std::cout<<"Zombies are on cpp02\n";
		return;
	}
	std::cout << "ClapTrap " << m_name << " attacks " << target << " dealing " << m_attackDamage << " damage\n";
	m_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if(m_hitPoints == 0){
		std::cout<<"You blind? Dude is already dead\n";
		return;
	}
	if(amount > m_hitPoints) {
		std::cout<<"You a killer machine!\n";
		m_hitPoints = 0;
		return;
	}
	std::cout << "ClapTrap " << m_name << " takes " << amount << " damage\n";
	m_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if(m_energyPoints == 0) {
		std::cout<<"No mana, no repair!\n";
		return;
	}
	if(m_hitPoints == 0) {
		std::cout<<"The zombies are on cpp02!\n";
		return;
	}
	std::cout << "ClapTrap " << m_name << " restores " << amount << " HP\n";
	m_hitPoints += amount;
	m_energyPoints--;
}

void ClapTrap::my_attack(ClapTrap &target) {
	if(m_energyPoints == 0) {
		std::cout<<"No mana, no attack!\n";
		return;
	}
	if(m_hitPoints == 0) {
		std::cout<<"Zombies are on cpp02\n";
		return;
	}
	std::cout << "ClapTrap " << m_name << " attacks " << target.m_name << " dealing " << m_attackDamage << " damage\n";
	m_energyPoints--;
	target.takeDamage(this->m_attackDamage);
}

std::string ClapTrap::getName() const {
	return m_name;
}

size_t ClapTrap::getHitPoints() const {
	return m_hitPoints;
}

int ClapTrap::getEnergyPoints() const {
	return m_energyPoints;
}

int ClapTrap::getAttackDamage() const {
	return m_attackDamage;
}

void ClapTrap::printStatus() const {
	std::cout << "Name: " << m_name << "\nHP: " << m_hitPoints << "\nMana: " << m_energyPoints << "\n";
}

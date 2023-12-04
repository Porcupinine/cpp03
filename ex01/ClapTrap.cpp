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

ClapTrap::ClapTrap(std::string new_name) : name(std::move(new_name)) {
	std::cout<<name<<" is ready!\n";
}

ClapTrap::~ClapTrap() {
	std::cout<<name<<" is waste now!\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &cp) {
	return *this;
}

void ClapTrap::attack(const std::string &target) {
	if(energyPoints == 0) {
		std::cout<<"No mana, no attack!\n";
		return;
	}
	if(hitPoints == 0) {
		std::cout<<"Zombies are on cpp02\n";
		return;
	}
	std::cout<<name<<" attacks "<<target<<" dealing "<<attackDamage<<" damage\n";
	energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if(hitPoints == 0){
		std::cout<<"You blind? Dude is already dead\n";
		return;
	}
	if(amount > hitPoints) {
		std::cout<<"You a killer machine!\n";
		hitPoints = 0;
		return;
	}
	std::cout<<name<<" takes "<<amount<<" damage\n";
	hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if(energyPoints == 0) {
		std::cout<<"No mana, no repair!\n";
		return;
	}
	if(hitPoints == 0) {
		std::cout<<"Can't repair, if you like zombies go cpp02!\n";
		return;
	}
	std::cout<<name<<" restores "<<amount<<" HP\n";
	hitPoints += amount;
	energyPoints--;
}

void ClapTrap::my_attack(ClapTrap &target) {
	if(energyPoints == 0) {
		std::cout<<"No mana, no attack!\n";
		return;
	}
	if(hitPoints == 0) {
		std::cout<<"Dead machine can't attack, for Zombies, see cpp02\n";
		return;
	}
	std::cout<<name<<" attacks "<<target.name<<" dealing "<<attackDamage<<" damage\n";
	energyPoints--;
	target.takeDamage(this->attackDamage);
}

std::string ClapTrap::getName() const {
	return name;
}

size_t ClapTrap::getHitPoints() const {
	return hitPoints;
}

size_t ClapTrap::getEnergyPoints() const {
	return energyPoints;
}

size_t ClapTrap::getAttackDamage() const {
	return attackDamage;
}

void ClapTrap::printStatus() const {
	std::cout<<"Name: "<<name<<"\nHP: "<<hitPoints<<"\nMana: "<<energyPoints<<"\n";
}

void ClapTrap::setName(std::string new_name) {
	name = std::move(new_name);
}

void ClapTrap::setHitPoints(size_t amount) {
	hitPoints = amount;
}

void ClapTrap::setEnergyPoints(size_t amount) {
	energyPoints = amount;
}

void ClapTrap::setAttackDamage(size_t amount) {
	attackDamage = amount;
}

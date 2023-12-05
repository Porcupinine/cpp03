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

#include "ScavTrap.h"
#include <iostream>
#include <utility>

ScavTrap::ScavTrap(std::string new_name) : ClapTrap(std::move(new_name)) {
	std::cout<<"ScavTrap "<< getName() <<" is ready!\n";
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

ScavTrap::~ScavTrap() {
	std::cout<<"ScavTrap "<<getName()<<" is now waste!\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &cp) {
	return *this;
}

void ScavTrap::guardGate() {
	std::cout<<getName()<<": YOU SHALL NOT PASS!!\n";
}


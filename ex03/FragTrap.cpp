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

#include "FragTrap.h"
#include <iostream>
#include <utility>

FragTrap::FragTrap(std::string new_name) : ClapTrap(std::move(new_name)) {
	std::cout<<"FragTrap "<< getName() <<" is ready!\n";
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

FragTrap::~FragTrap() {
	std::cout<<"FragTrap "<<getName()<<" is now waste!\n";
}

FragTrap &FragTrap::operator=(const FragTrap &cp) {
	return *this;
}

void FragTrap::highFivesGuys() {
	std::cout<<"HI 5!!!\n";
}

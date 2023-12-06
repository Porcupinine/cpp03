/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/04 11:06:26 by laura         #+#    #+#                 */
/*   Updated: 2023/12/04 11:06:26 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.h"
#include "../includes/FragTrap.h"
#include <iostream>
#include "../includes/DiamondTrap.h"

int main() {
	ClapTrap c1("Lavender");
	ScavTrap s1("Dill");
	FragTrap f1("Mint");
	DiamondTrap d1("Rosemary");

	std::cout<<"\nStatus\n";
	c1.printStatus();
	s1.printStatus();
	f1.printStatus();
	d1.printStatus();

	std::cout<<"\nFirst round\n";
	c1.attack(s1.getName());
	s1.takeDamage(c1.getAttackDamage());
	s1.attack(f1.getName());
	f1.takeDamage(s1.getAttackDamage());
	f1.attack(d1.getName());
	d1.takeDamage(f1.getAttackDamage());
	d1.attack(c1.getName());
	c1.takeDamage(d1.getAttackDamage());

	std::cout<<"\nStatus\n";
	c1.printStatus();
	s1.printStatus();
	f1.printStatus();
	d1.printStatus();

	std::cout<<"\nSpecial skills\n";
	s1.guardGate();
	f1.highFivesGuys();
	d1.whoAmI();

	std::cout<<"\nSecond round\n";
	c1.attack(s1.getName());
	s1.takeDamage(c1.getAttackDamage());
	s1.attack(f1.getName());
	f1.takeDamage(s1.getAttackDamage());
	f1.attack(d1.getName());
	d1.takeDamage(f1.getAttackDamage());
	d1.attack(c1.getName());
	c1.takeDamage(d1.getAttackDamage());

	std::cout<<"\nStatus\n";
	c1.printStatus();
	s1.printStatus();
	f1.printStatus();
	d1.printStatus();

	std::cout<<"\nSpecial skills\n";
	s1.guardGate();
	f1.highFivesGuys();
	d1.whoAmI();

	std::cout<<"\nThird round\n";
	c1.attack(s1.getName());
	s1.takeDamage(c1.getAttackDamage());
	s1.attack(f1.getName());
	f1.takeDamage(s1.getAttackDamage());
	f1.attack(d1.getName());
	d1.takeDamage(f1.getAttackDamage());
	d1.attack(c1.getName());
	c1.takeDamage(d1.getAttackDamage());

	std::cout<<"\nStatus\n";
	c1.printStatus();
	s1.printStatus();
	f1.printStatus();
	d1.printStatus();

	std::cout<<"\nSpecial skills\n";
	s1.guardGate();
	f1.highFivesGuys();
	d1.whoAmI();

	std::cout<<"\nFirst round\n";
	c1.attack(s1.getName());
	s1.takeDamage(c1.getAttackDamage());
	s1.attack(f1.getName());
	f1.takeDamage(s1.getAttackDamage());
	f1.attack(d1.getName());
	d1.takeDamage(f1.getAttackDamage());
	d1.attack(c1.getName());
	c1.takeDamage(d1.getAttackDamage());

	std::cout<<"\nStatus\n";
	c1.printStatus();
	s1.printStatus();
	f1.printStatus();
	d1.printStatus();

	std::cout<<"\nSpecial skills\n";
	s1.guardGate();
	f1.highFivesGuys();
	d1.whoAmI();

	std::cout<<"\nFourth round\n";
	c1.attack(s1.getName());
	s1.takeDamage(c1.getAttackDamage());
	s1.attack(f1.getName());
	f1.takeDamage(s1.getAttackDamage());
	f1.attack(d1.getName());
	d1.takeDamage(f1.getAttackDamage());
	d1.attack(c1.getName());
	c1.takeDamage(d1.getAttackDamage());

	std::cout<<"\nStatus\n";
	c1.printStatus();
	s1.printStatus();
	f1.printStatus();
	d1.printStatus();

	std::cout<<"\nSpecial skills\n";
	s1.guardGate();
	f1.highFivesGuys();
	d1.whoAmI();
	std::cout<<"\n\n";
}
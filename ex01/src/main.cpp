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
#include "../includes/ScavTrap.h"
#include <iostream>

int main() {
	ClapTrap c1("Lavender");
	ClapTrap c2("Thyme");
	ClapTrap c3("Basil");
	ClapTrap c4("Rosemary");
	ScavTrap s1("Cumin");
	ScavTrap s2("Mint");
	ScavTrap s3("Dill");
	ScavTrap s4("Oregano");

	std::cout<<"\n\nSubject Clap round!\n          3..2..1..FIGHT!           \n";
	c1.attack(c2.getName());
	c2.takeDamage(c1.getAttackDamage());
	c1.printStatus();
	c2.printStatus();
	c2.attack(c1.getName());
	c1.beRepaired(c1.getAttackDamage());
	c1.printStatus();
	c2.printStatus();

	std::cout<<"\n\nMy Clap round!\n               3...2...1...FIGHT!\n";
	c3.my_attack(c4);
	c4.my_attack(c3);
	c3.printStatus();
	c4.printStatus();

	std::cout<<"\n\nSubject Scav round!\n          3..2..1..FIGHT!           \n";
	s1.attack(s2.getName());
	s2.takeDamage(s1.getAttackDamage());
	s1.printStatus();
	s2.printStatus();
	s2.attack(s1.getName());
	s1.beRepaired(s1.getAttackDamage());
	s1.printStatus();
	s2.printStatus();
	s1.attack(s2.getName());
	s2.takeDamage(s1.getAttackDamage());
	s1.printStatus();
	s2.printStatus();
	s1.attack(s2.getName());
	s2.takeDamage(s1.getAttackDamage());
	s1.printStatus();
	s2.printStatus();
	s1.attack(s2.getName());
	s2.takeDamage(s1.getAttackDamage());
	s1.printStatus();
	s2.printStatus();
	s1.attack(s2.getName());
	s2.takeDamage(s1.getAttackDamage());
	s1.printStatus();
	s2.printStatus();
	s1.attack(s2.getName());
	s2.takeDamage(s1.getAttackDamage());
	s1.printStatus();
	s2.printStatus();
	s1.guardGate();
	s2.guardGate();
	s1.printStatus();
	s2.printStatus();

	std::cout<<"\n\nMy Scav round!\n               3...2...1...FIGHT!\n";
	s3.my_attack(s4);
	s4.my_attack(s3);
	s3.printStatus();
	s4.printStatus();
	s3.my_attack(s4);
	s4.my_attack(s3);
	s3.printStatus();
	s4.printStatus();
	s3.guardGate();
	std::cout<<"\n\n";
}
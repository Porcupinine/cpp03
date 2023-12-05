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

#include "ClapTrap.h"
#include "FragTrap.h"
#include <iostream>

int main() {
	ClapTrap c1("Lavender");
	ClapTrap c2("Thyme");
	ClapTrap c3("Basil");
	ClapTrap c4("Rosemary");
	FragTrap f1("Cumin");
	FragTrap f2("Mint");
	FragTrap f3("Dill");
	FragTrap f4("Oregano");

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

	std::cout<<"\n\nSubject Frag round!\n          3..2..1..FIGHT!           \n";
	f1.attack(f2.getName());
	f2.takeDamage(f1.getAttackDamage());
	f1.printStatus();
	f2.printStatus();
	f2.attack(f1.getName());
	f1.beRepaired(f1.getAttackDamage());
	f1.printStatus();
	f2.printStatus();

	std::cout<<"\n\nMy Frag round!\n               3...2...1...FIGHT!\n";
	f3.my_attack(f4);
	f4.my_attack(f3);
	f3.printStatus();
	f4.printStatus();
	f3.my_attack(f4);
	f4.my_attack(f3);
	f3.printStatus();
	f4.printStatus();
	f3.my_attack(f4);
	f4.my_attack(f3);
	f3.printStatus();
	f4.printStatus();
	f3.my_attack(f4);
	f4.my_attack(f3);
	f3.printStatus();
	f4.printStatus();
	f3.my_attack(f4);
	f4.my_attack(f3);
	f3.printStatus();
	f4.printStatus();
	f3.my_attack(f4);
	f4.my_attack(f3);
	f3.printStatus();
	f4.printStatus();
	f3.my_attack(f4);
	f4.my_attack(f3);
	f3.printStatus();
	f4.printStatus();
	f3.highFivesGuys();

	std::cout<<"\n\n";
}
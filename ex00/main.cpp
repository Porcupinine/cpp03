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
#include <iostream>

int main() {
	ClapTrap c1("Lavender");
	ClapTrap c2("Thyme");
	ClapTrap c3("Basil");
	ClapTrap c4("Rosemary");

	std::cout<<"\n\nSubject round!\n          3..2..1..FIGHT!           \n";
	c1.attack(c2.getName());
	c2.takeDamage(c1.getAttackDamage());
	c1.printStatus();
	c2.printStatus();
	c2.attack(c1.getName());
	c1.beRepaired(c1.getAttackDamage());
	c1.printStatus();
	c2.printStatus();
	std::cout<<"\n\nMy round!\n               3...2...1...FIGHT!\n";
	c3.my_attack(c4);
	c4.my_attack(c3);
	c3.printStatus();
	c4.printStatus();
}
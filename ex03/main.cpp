/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 15:07:56 by akonstan          #+#    #+#             */
/*   Updated: 2026/04/09 15:07:57 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(){
	std::cout << "\n-----ClapTrap-Tests-----\n";

	ClapTrap c1("Faidon");
	ClapTrap c2("Kostas");
	std::string	enemy = "Calories";

	std::cout << "\n--Initial values test--\n";
	std::cout << c1 << " _hitPoints " << c1.getHitPoints() << std::endl;
	std::cout << c1 << " _energyPoints " << c1.getEnergyPoints() << std::endl;
	std::cout << c1 << " _attackDamage " << c1.getAttackDamage() << std::endl;
	std::cout << c2 << " _hitPoints " << c2.getHitPoints() << std::endl;
	std::cout << c2 << " _energyPoints " << c2.getEnergyPoints() << std::endl;
	std::cout << c2 << " _attackDamage " << c2.getAttackDamage() << std::endl;

	std::cout << "\n--Test Attack--\n";
	c1.attack(enemy);
	c2.attack(enemy);

	std::cout << "\n--Test Take Damage--\n";
	c1.takeDamage(5);
	c2.takeDamage(200);
	c2.takeDamage(103141);
	std::cout << c1 << " _hitPoints " << c1.getHitPoints() << std::endl;
	std::cout << c2 << " _hitPoints " << c2.getHitPoints() << std::endl;


	std::cout << "\n--Test Be Repaired--\n";
	c1.beRepaired(1);
	std::cout << c1 << " _hitPoints " << c1.getHitPoints() << std::endl;
	c1.beRepaired(10);
	std::cout << c1 << " _hitPoints " << c1.getHitPoints() << std::endl;
	c2.beRepaired(11321);

	std::cout << "\n--Test running out of energy--\n";
	std::cout << c1 << " _energyPoints " << c1.getEnergyPoints() << std::endl;
	for (int i = c1.getEnergyPoints(); i > 0; i--){
		c1.attack(enemy);
	}
	c1.attack(enemy);
	std::cout << c1 << " _energyPoints " << c1.getEnergyPoints() << std::endl;

	std::cout << "\n-----End-of-ClapTrap-Tests-----\n";

	std::cout << "\n-----ScavTrap-Tests-----\n";

	std::cout << "\n--Constructors tests--\n";
	ScavTrap s0;
	ScavTrap s1("Steve");
	ScavTrap s2(s1);
	std::cout << s0 << "\n" << s1 <<  "\n" << s2;
	std::cout << "\n--Copy Assignement tests--\n";
	s0 = s1;
	std::cout << s0;
	std::cout << "\n--Attack method tests--\n";
	s1.attack(enemy);
	s1.ClapTrap::attack(enemy);
    std::cout << "\n--Guard method test--\n";
    s1.guardGate();
	std::cout << "\n--Inherited Methods tests--\n";
	s1.takeDamage(30);
	std::cout << s1;
	s1.beRepaired(15);
	std::cout << s1;
	s1.takeDamage(100);
	s1.attack(enemy);
	std::cout << s1;

	std::cout << "\n-----End-of-ScavTrap-Tests-----\n";


    std::cout << "\n-----FragTrap-Tests-----\n";

	std::cout << "\n--Constructors tests--\n";
	FragTrap f0;
	FragTrap f1("Kingsley");
	FragTrap f2(f1);
	std::cout << f0 << "\n" << f1 <<  "\n" << f2;
	std::cout << "\n--Copy Assignement tests--\n";
	f0 = f1;
	std::cout << f0;
	std::cout << "\n--Attack method tests--\n";
	f1.ClapTrap::attack(enemy);
    std::cout << "\n--High fives method test--\n";
    f1.highFivesGuys();
	std::cout << "\n--Inherited Methods tests--\n";
	f1.takeDamage(30);
	std::cout << f1;
	f1.beRepaired(15);
	std::cout << f1;
	f1.takeDamage(100);
	f1.attack(enemy);
	std::cout << f1;
	std::cout << "\n-----End-of-FragTrap-Tests-----\n";

	 std::cout << "\n-----Diamond-Trap-Tests-----\n";

	std::cout << "\n--Constructors tests--\n";
	DiamondTrap d0;
	DiamondTrap d1("Lorence");
	DiamondTrap d2(d1);
	std::cout << d0 << "\n" << d1 <<  "\n" << d2;
	std::cout << "\n--Copy Assignement tests--\n";
	d0 = d1;
	std::cout << d0;
	std::cout << "\n--Attack method tests--\n";
	d1.attack(enemy);
    std::cout << "\n--High fives method test--\n";
    d1.highFivesGuys();
	std::cout << "\n--Guard method test--\n";
    d1.guardGate();
	std::cout << "\n--WhoAmI methos test--\n";
	d1.whoAmI();
	std::cout << "\n--Inherited Methods tests--\n";
	d1.takeDamage(30);
	std::cout << d1;
	d1.beRepaired(15);
	std::cout << d1;
	d1.takeDamage(100);
	d1.attack(enemy);
	std::cout << d1;
	std::cout << "\n-----End-of-FragTrap-Tests-----\n";

	std::cout << "\n-----Destructors------\n";
	return (0);
}

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

#include "ClapTrap.hpp"

int	main(){
	ClapTrap c1("Faidon");
	ClapTrap c2("Kostas");
	std::string	enemy = "Calories";

	//Initial values test
	std::cout << c1 << " _hitPoints " << c1.getHitPoints() << std::endl;
	std::cout << c1 << " _energyPoints " << c1.getEnergyPoints() << std::endl;
	std::cout << c1 << " _attackDamage " << c1.getAttackDamage() << std::endl;
	std::cout << c2 << " _hitPoints " << c2.getHitPoints() << std::endl;
	std::cout << c2 << " _energyPoints " << c2.getEnergyPoints() << std::endl;
	std::cout << c2 << " _attackDamage " << c2.getAttackDamage() << std::endl;

	//Test Attack
	c1.attack(enemy);
	c2.attack(enemy);

	//Test Take Damage
	c1.takeDamage(5);
	c2.takeDamage(200);
	c2.takeDamage(103141);
	std::cout << c1 << " _hitPoints " << c1.getHitPoints() << std::endl;
	std::cout << c2 << " _hitPoints " << c2.getHitPoints() << std::endl;


	//Test Be Repaired
	c1.beRepaired(1);
	std::cout << c1 << " _hitPoints " << c1.getHitPoints() << std::endl;
	c1.beRepaired(10);
	std::cout << c1 << " _hitPoints " << c1.getHitPoints() << std::endl;
	c2.beRepaired(11321);

	//Test running out of energy
	std::cout << c1 << " _energyPoints " << c1.getEnergyPoints() << std::endl;
	for (int i = c1.getEnergyPoints(); i > 0; i--){
		c1.attack(enemy);
	}
	c1.attack(enemy);
	std::cout << c1 << " _energyPoints " << c1.getEnergyPoints() << std::endl;
	return (0);
}

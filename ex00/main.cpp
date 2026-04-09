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

	//Test Attack
	
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 15:07:48 by akonstan          #+#    #+#             */
/*   Updated: 2026/04/09 15:07:50 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("", 100, 100, 30){
	std::cout << "FragTrap Default Constructor called\n";
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name, 100, 100, 30){
	std::cout << "FragTrap Parametrized constructor called" << std::endl;
}

FragTrap::FragTrap( FragTrap const& other ) : ClapTrap(other){
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap::~FragTrap( void ){
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const& other){
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	if (this != &other){
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
		this->_maxHitPoints = other._maxHitPoints;
		this->_maxEnergy = other._maxEnergy;
	}
	return (*this);
}

void FragTrap::highFivesGuys( void ){
	std::cout << "FragTrap " << _name << " is requesting a high five!\n";
}

std::ostream &operator<<(std::ostream &out, FragTrap const& st){
	return ( out << "FragTrap " << st.getName() << " has :\n	HP: " 
	<< st.getHitPoints() << "\n	EP: " << st.getEnergyPoints() 
	<< "\n	AD: " << st.getAttackDamage() << "\n");
}
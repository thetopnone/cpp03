/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 13:55:23 by akonstan          #+#    #+#             */
/*   Updated: 2026/04/10 13:55:24 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
	:ClapTrap("", 100, 50, 20)
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name )
	:ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap Parametrized constructor called" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const& other ) : ClapTrap(other){
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap( void ){
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const& other){
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
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

void ScavTrap::attack(const std::string& target){
	if (_hitPoints != 0 && _energyPoints != 0){
		std::cout << "ScavTrap " << _name << " is attacking " 
		<< target << " for " << _attackDamage << " points of damage\n";
		this->_energyPoints--;
	}
	if (_hitPoints == 0){
		std::cout << "ScavTrap " << _name << " is dead!\n";
	}
	else if (_energyPoints == 0){
		std::cout << "ScavTrap " << _name << " is out of energy!\n";
	}
}

void ScavTrap::guardGate( void ){
	std::cout << "ScavTrap " << _name << "is now in Gate keeper mode\n";
}

std::string ScavTrap::getName( void ) const{
	return (_name);
}

std::ostream &operator<<(std::ostream &out, ScavTrap const& st){
	return ( out << "ScavTrap " << st.getName() << " has :\n	HP: " 
	<< st.getHitPoints() << "\n	EP: " << st.getEnergyPoints() 
	<< "\n	AD: " << st.getAttackDamage() << "\n");
}

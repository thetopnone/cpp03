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

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
	:ClapTrap()
	,ScavTrap()
	,FragTrap()
{
	this->_name = "";
	ClapTrap::_name = "_clap_name";
	this->_hitPoints = FragTrap::_defaultHP;
	this->_energyPoints = ScavTrap::_defaultEP;
	this->_attackDamage = FragTrap::_defaultAD;
	this->_maxHitPoints = _hitPoints;
	this->_maxEnergy = _energyPoints;
	std::cout << "DiamondTrap Default Constructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
	:ClapTrap(name)
	,ScavTrap(name)
	,FragTrap(name)
{
	_name = name;
	ClapTrap::_name += "_clap_name";
	_hitPoints = FragTrap::_defaultHP;
	_energyPoints = ScavTrap::_defaultEP;
	_attackDamage = FragTrap::_defaultAD;
	_maxHitPoints = _hitPoints;
	_maxEnergy = _energyPoints;
	std::cout << "DiamondTrap Parametrized Constructor Called\n";
}

DiamondTrap::DiamondTrap(DiamondTrap const& other)
	:ClapTrap(other)
	,ScavTrap(other)
	,FragTrap(other)
{
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	_maxHitPoints = other._maxHitPoints;
	_maxEnergy = other._maxEnergy;

	std::cout << "DiamondTrap Copy Constructor called\n";
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const& other){
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

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

void DiamondTrap::whoAmI( void ){
	std::cout << "DiamondTrap: " << _name << "\nClapTrap name: " << ClapTrap::_name;
	std::cout << std::endl;
}

std::string DiamondTrap::getName( void ) const{
	return (_name);
}

std::ostream &operator<<(std::ostream &out, DiamondTrap const& dt){
	return ( out << "DiamondTrap " << dt.getName() << " has :\n	HP: " 
	<< dt.getHitPoints() << "\n	EP: " << dt.getEnergyPoints() 
	<< "\n	AD: " << dt.getAttackDamage() << "\n");
}
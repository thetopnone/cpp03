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

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
	:_name("")
	,_hitPoints(10)
	,_energyPoints(10)
	,_attackDamage(0)
	{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	:_name(name)
	,_hitPoints(10)
	,_energyPoints(10)
	,_attackDamage(0)
	{
	std::cout << "ClapTrap Name Parameterized constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name, unsigned int hp, unsigned int ep, unsigned int ad)
	:_name(name)
	,_hitPoints(hp)
	,_energyPoints(ep)
	,_attackDamage(ad)
	{
	std::cout << "ClapTrap Protected Parameterized constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& other)
	:_name(other._name)
	,_hitPoints(other._hitPoints)
	,_energyPoints(other._energyPoints)
	,_attackDamage(other._attackDamage)
	{
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const& other){
	std::cout << "ClapTrap copy assignement operator called" << std::endl;
	if (this != &other){
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap( void ){
	std::cout << "ClapTrap destructor called" << std::endl;
}

void	ClapTrap::attack( const std::string& target){
	if (_hitPoints != 0 && _energyPoints != 0){
		std::cout << *this << " attacks " << target << " causing " << _attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	if (_hitPoints == 0){
		std::cout << *this << " is dead!" << std::endl;
	}
	else if (_energyPoints == 0){
		std::cout << *this << " is out of energy!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (_hitPoints != 0 && _energyPoints != 0){
		std::cout << *this << " has taken " << amount << " points of damage" << std::endl;
		if (this->_hitPoints >= amount)
			this->_hitPoints -= amount;
		else
			this->_hitPoints = 0;
	}
	if (_hitPoints == 0){
		std::cout << *this << " is dead!" << std::endl;
	}
	else if (_energyPoints == 0){
		std::cout << *this << " is out of energy!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (_hitPoints == 10){
			std::cout << *this << " is full health already!" << std::endl;
			return ;
	}
	if (_hitPoints != 0 && _energyPoints != 0){
		if (_hitPoints + amount > 10){
			std::cout << *this << " has repaired " << 10 - this->_hitPoints << " hit points" << std::endl;
			this->_hitPoints = 10;
		}
		else{
			this->_hitPoints += amount;
			std::cout << *this << " has repaired " << amount << " hit points" << std::endl;
		}
		this->_energyPoints--;
	}
	if (_hitPoints == 0){
		std::cout << *this << " is dead!" << std::endl;
	}
	else if (_energyPoints == 0){
		std::cout << *this << " is out of energy!" << std::endl;
	}
}

std::string ClapTrap::getName( void ) const{
	return (this->_name);
}

unsigned int ClapTrap::getHitPoints ( void ) const{
	return (this->_hitPoints);
}

unsigned int ClapTrap::getEnergyPoints( void ) const{
	return (this->_energyPoints);
}
unsigned int ClapTrap::getAttackDamage( void ) const{
	return (this->_attackDamage);
}

std::ostream &operator<<(std::ostream &out, ClapTrap const& ct){
	return (out << "ClapTrap " << ct.getName());
}

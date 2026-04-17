/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 15:07:42 by akonstan          #+#    #+#             */
/*   Updated: 2026/04/09 15:07:43 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>
# include <iostream>

class ClapTrap{
	protected:
		std::string _name;
		unsigned int _hitPoints;
		unsigned int _energyPoints;
		unsigned int _attackDamage;
		unsigned int _maxHitPoints;
		unsigned int _maxEnergy;
		ClapTrap(std::string name, unsigned int hp, unsigned int ep, unsigned int ad);
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const& other);
		ClapTrap &operator=(ClapTrap const& other);
		virtual ~ClapTrap();

		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string getName( void ) const;
		unsigned int getHitPoints ( void ) const;
		unsigned int getEnergyPoints( void ) const;
		unsigned int getAttackDamage( void ) const;
};

std::ostream &operator<<(std::ostream &out, ClapTrap const& ct);
#endif

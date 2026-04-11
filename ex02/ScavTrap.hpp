/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 13:55:28 by akonstan          #+#    #+#             */
/*   Updated: 2026/04/10 13:55:29 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const& other);
		ScavTrap &operator=(ScavTrap const& other);
		~ScavTrap();

		void guardGate();
		void attack(const std::string &target);
};

std::ostream &operator<<(std::ostream &out, ScavTrap const& st);
#endif

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

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
	protected:
		static unsigned int const _defaultHP = 100;
		static unsigned int const _defaultEP = 100;
		static unsigned int const _defaultAD = 30;
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const& other);
		FragTrap &operator=(FragTrap const& other);
		~FragTrap();

		void highFivesGuys( void );
		std::string getName( void ) const;
};

std::ostream &operator<<(std::ostream &out, FragTrap const& ft);
#endif
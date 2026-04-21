/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroo <student@42.eu>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:10:31 by fgroo             #+#    #+#             */
/*   Updated: 2026/04/21 16:20:53 by fgroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap &other );
		ClapTrap &operator=( const ClapTrap &other );
		~ClapTrap( void );
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
	protected:
		ClapTrap( void );
		std::string	_name;
		size_t		_hit_points;
		size_t		_energy_points;
		size_t		_attack_damage;
};

#endif

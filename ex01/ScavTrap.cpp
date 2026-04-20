/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroo <student@42.eu>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 23:42:49 by fgroo             #+#    #+#             */
/*   Updated: 2026/04/21 00:04:11 by fgroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : _name(name), _hit_points(100), _energy_points(50), _attack_damage(20) {
	std::cout << "*ScavTrap [" << this->_name << "] joined the party*" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &other ) {
	if (this != &other)
		*this = other;
}

ScavTrap	&operator=( const ScavTrap &other );
~ScavTrap( void );
void		attack( const std::string& target );
		void		guardGate( void );
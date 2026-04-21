/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroo <student@42.eu>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 23:42:49 by fgroo             #+#    #+#             */
/*   Updated: 2026/04/21 16:20:37 by fgroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "*and " << name << " transformed into a ScavTrap*" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &other ) : ClapTrap(other) { }

ScavTrap	&ScavTrap::operator=( const ScavTrap &other ) {
	ClapTrap::operator=(other);
	return *this;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "*ScavTrap [" << this->_name << "] left the party*" << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
		if (!_energy_points)
			std::cout << "ScavTrap " << this->_name << " has no energy left." << std::endl;
		else if (!this->_hit_points)
			std::cout << "ScavTrap " << this->_name << " is already dead." << std::endl;
		else {
			std::cout << "ScavTrap " << this->_name << " attacks "
				<< target << ", causing " << this->_attack_damage 
				<< " points of damage!" << std::endl;
			--this->_energy_points;
		}
}

void		ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap " << this->_name << "  - gatekeeper mode activated" << std::endl;
}

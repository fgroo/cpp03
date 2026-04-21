/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroo <student@42.eu>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:07:24 by fgroo             #+#    #+#             */
/*   Updated: 2026/04/21 19:29:05 by fgroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name) {
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
	std::cout << "*what is going on? " << this->_name << " fuses the costumes and transforms to a DiamondTrap!*" << std::endl; 
}

DiamondTrap::~DiamondTrap() {
	std::cout << "*the DiamondTrap costume falls apart*" << std::endl;
}

void DiamondTrap::whoAmI( void ) {
	std::cout << "I am DiamondTrap " << this->_name << " and I am also a " << ClapTrap::_name << std::endl;
}

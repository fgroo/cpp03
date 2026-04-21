/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroo <student@42.eu>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 15:32:43 by fgroo             #+#    #+#             */
/*   Updated: 2026/04/21 16:18:23 by fgroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name) : ClapTrap(name) {
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "*and " << name << " transformed into a FragTrap*" << std::endl;
}

FragTrap::FragTrap( const FragTrap &other ) : ClapTrap(other) {}

FragTrap	&FragTrap::operator=( const FragTrap &other) {
	ClapTrap::operator=(other);
	return *this;
}

FragTrap::~FragTrap( void ) {
	std::cout << "*FragTrap [" << this->_name << "] left the party*" << std::endl;
}

void	FragTrap::attack(const std::string& target) {
		if (!_energy_points)
			std::cout << "FragTrap " << this->_name << " has no energy left." << std::endl;
		else if (!this->_hit_points)
			std::cout << "FragTrap " << this->_name << " is already dead." << std::endl;
		else {
			std::cout << "FragTrap " << this->_name << " attacks "
				<< target << ", causing " << this->_attack_damage 
				<< " points of damage!" << std::endl;
			--this->_energy_points;
		}
}

void		FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->_name << " - requests positive high-fives" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroo <student@42.eu>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:19:18 by fgroo             #+#    #+#             */
/*   Updated: 2026/04/21 14:35:09 by fgroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) {
	std::cout << "ClapTrap " << this->_name << " has been created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	if (this != &other)
		*this = other;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other) {
	if (this != &other)
		this->_name = other._name, this->_hit_points = other._hit_points, this->_energy_points = other._energy_points, this->_attack_damage = other._attack_damage;
	return *this;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "*ClapTrap [" << this->_name << "] has left the chat*" << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
		if (!_energy_points)
			std::cout << "ClapTrap " << this->_name << " has no energy left" << std::endl;
		else if (!this->_hit_points)
			std::cout << "ClapTrap " << this->_name << " is already dead." << std::endl;
		else {
			std::cout << "ClapTrap " << this->_name << " attacks "
				<< target << ", causing " << this->_attack_damage 
				<< " points of damage!" << std::endl;
			--this->_energy_points;
		}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (!this->_hit_points)
		std::cout << "ClapTrap " << this->_name << " is already dead." << std::endl;
	else {
		std::cout << "ClapTrap " << this->_name << " got hit and lost " << amount 
			<< " hit points!" << std::endl;
		this->_hit_points -= amount;
		if (!this->_hit_points)
			std::cout << "ClapTrap " << this->_name << " died through the last attack." << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (!this->_energy_points)
		std::cout << "ClapTrap " << this->_name << " has no energy left" << std::endl;
	else if (!this->_hit_points)
		std::cout << "ClapTrap " << this->_name << " is already dead." << std::endl;
	else {
		std::cout << "ClapTrap " << this->_name << " repaired itself and gained " << amount 
			<< " hit points!" << std::endl;
		this->_hit_points += amount;
		--this->_energy_points;
	}
}
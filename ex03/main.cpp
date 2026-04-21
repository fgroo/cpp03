/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroo <student@42.eu>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 23:30:29 by fgroo             #+#    #+#             */
/*   Updated: 2026/04/21 18:57:43 by fgroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void) {
	ClapTrap claptrap("ClapTrap");
	claptrap.attack("ClapTrap");
	claptrap.takeDamage(5);
	claptrap.beRepaired(5);
	claptrap.takeDamage(10);
	claptrap.attack("ClapTrap");
	claptrap.beRepaired(10);

	ScavTrap scavtrap("ScavTrap");
	scavtrap.attack("ClapTrap");
	scavtrap.takeDamage(5);
	scavtrap.beRepaired(5);
	scavtrap.takeDamage(10);
	scavtrap.attack("ClapTrap");
	scavtrap.beRepaired(10);
	scavtrap.guardGate();

	scavtrap.takeDamage(100);
	scavtrap.attack("Nobody");
	scavtrap.beRepaired(10);

	ScavTrap copy = scavtrap;
	copy.attack("Nobody");

	ClapTrap *ptr = &scavtrap;
	ptr->attack("Nobody");

	FragTrap fragtrap("FragTrap");
	fragtrap.attack("ClapTrap");
	fragtrap.takeDamage(5);
	fragtrap.beRepaired(5);
	fragtrap.takeDamage(10);
	fragtrap.attack("ClapTrap");
	fragtrap.beRepaired(10);
	fragtrap.highFivesGuys();

	fragtrap.takeDamage(100);
	fragtrap.attack("Nobody");
	fragtrap.beRepaired(10);
	fragtrap.highFivesGuys();

	FragTrap copy2 = fragtrap;
	copy.attack("Nobody");

	DiamondTrap diamondtrap("DiamondTrap");
	diamondtrap.attack("ClapTrap");
	diamondtrap.whoAmI();
	
	return 0;
}


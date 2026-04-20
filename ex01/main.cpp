/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroo <student@42.eu>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 23:30:29 by fgroo             #+#    #+#             */
/*   Updated: 2026/04/20 23:31:41 by fgroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
	ClapTrap claptrap("ClapTrap");
	claptrap.attack("ClapTrap");
	claptrap.takeDamage(5);
	claptrap.beRepaired(5);
	claptrap.takeDamage(10);
	claptrap.attack("ClapTrap");
	claptrap.beRepaired(10);
	return (0);
}


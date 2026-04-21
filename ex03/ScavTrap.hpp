/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroo <student@42.eu>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 23:42:45 by fgroo             #+#    #+#             */
/*   Updated: 2026/04/21 18:42:56 by fgroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap &other );
		ScavTrap	&operator=( const ScavTrap &other );
		~ScavTrap( void );
		void		attack( const std::string& target );
		void		guardGate( void );
};

#endif
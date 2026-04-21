/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroo <student@42.eu>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 15:32:40 by fgroo             #+#    #+#             */
/*   Updated: 2026/04/21 19:26:18 by fgroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap( std::string name);
		FragTrap( const FragTrap &other );
		FragTrap	&operator=( const FragTrap &other);
		~FragTrap( void );
		void		attack(const std::string& target);
		void		highFivesGuys(void);
};

#endif

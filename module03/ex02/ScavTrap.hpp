/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lreille <lreille@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:43:11 by lreille           #+#    #+#             */
/*   Updated: 2023/04/26 17:57:34 by lreille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:
		ScavTrap();
	public:
		~ScavTrap();
		ScavTrap(std::string const &s);
		ScavTrap(ScavTrap const &);
		void attack(const std::string &target);
		ScavTrap& operator=(const ScavTrap&);
		void guardGate();
};

#endif

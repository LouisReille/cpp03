/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lreille <lreille@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:17:41 by lreille           #+#    #+#             */
/*   Updated: 2023/04/26 18:32:43 by lreille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	private:
		FragTrap();
	public:
		~FragTrap();
		FragTrap(const std::string &s);
		FragTrap(const FragTrap&);
		FragTrap& operator=(const FragTrap &);
		void attack(const std::string &target);
		void guardGate();
		void highFivesGuys();
};

#endif

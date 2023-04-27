/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lreille <lreille@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:20:35 by lreille           #+#    #+#             */
/*   Updated: 2023/04/26 16:18:45 by lreille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
    private:
    	ClapTrap();
	std::string	_name;
	unsigned int	_hit_pts;
	unsigned int	_nrg_pts;
	unsigned int	_attack;
    public:
    	ClapTrap(const std::string &);
	ClapTrap(const ClapTrap&);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	ClapTrap &operator=(const ClapTrap &);
	~ClapTrap();
};



#endif

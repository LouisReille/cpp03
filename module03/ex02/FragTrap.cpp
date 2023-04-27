/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lreille <lreille@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:20:25 by lreille           #+#    #+#             */
/*   Updated: 2023/04/26 21:03:57 by lreille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const &s): ClapTrap(s)
{
	std::cout << "FragTrap constructor called "<< std::endl;
	_hit_pts = 100;
	_nrg_pts = 100;
	_attack = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called "<< std::endl;
}

FragTrap::FragTrap(FragTrap const &n): ClapTrap(n)
{
	std::cout << "FragTrap copy constructor called "<< std::endl;
}


void FragTrap::guardGate()
{
	std::cout << "FragTrap " << _name << " is gate keeping!" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _name << " is asking to high five!" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
	if(_hit_pts <= 0)
	{
		std::cout << "FragTrap " << _name << " can't attack if dead!";
		std::cout << std::endl;
		return ;
	}
	if(_nrg_pts <= 0)
	{
		std::cout << "FragTrap " << _name << " can't attack wihtout energy!";
		std::cout << std::endl;
		return ;
	}
	_nrg_pts -= 1;
	std::cout << "FragTrap " << _name << " attacks " << target;
	std::cout << " causing " << _attack << " points of damage!" << std::endl;
}

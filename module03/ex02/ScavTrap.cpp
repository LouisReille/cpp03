/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lreille <lreille@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:46:07 by lreille           #+#    #+#             */
/*   Updated: 2023/04/26 18:36:27 by lreille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const &s): ClapTrap(s)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	_hit_pts = 100;
	_nrg_pts = 50;
	_attack = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &n): ClapTrap(n)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is gate keeping!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (_hit_pts <= 0)
	{
		std::cout << "ScavTrap " << _name << " can't attack if dead!";
		std::cout << std::endl;
		return ;
	}
	if (_nrg_pts <= 0)
	{
		std::cout << "ScavTrap " << _name << " can't attack without energy!";
		std::cout << std::endl;
		return ;
	}
	_nrg_pts -= 1;
	std::cout << "ScavTrap " << _name << " attacks " << target;
	std::cout << " causing " << _attack << " points of damage!" << std::endl;
}

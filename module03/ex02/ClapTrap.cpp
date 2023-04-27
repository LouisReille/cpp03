/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lreille <lreille@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:20:27 by lreille           #+#    #+#             */
/*   Updated: 2023/04/26 21:04:41 by lreille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Constructor called!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	_name = cpy._name;
	_hit_pts = cpy._hit_pts;
	_nrg_pts = cpy._nrg_pts;
	_attack = cpy._attack;
}

ClapTrap::ClapTrap(const std::string &name)
{
	std::cout << "ClapTrap is called" << std::endl;
	_name = name;
	_hit_pts = 10;
	_nrg_pts = 10;
	_attack = 0;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &op)
{
	std::cout << "Assignment operator called" << std::endl;
	_hit_pts = op._hit_pts;
	_nrg_pts = op._nrg_pts;
	_attack = op._attack;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (_hit_pts <= 0)
	{
		std::cout << "ClapTrap " << _name << "can't attack if dead...";
		std::cout << std::endl;
		return ;
	}
	if (_nrg_pts <= 0)
	{
		std::cout << "ClapTrap " << _name << "can't attack without energy...";
		std::cout << std::endl;
		return ;
	}
	_nrg_pts -= 1;
	std::cout << "ClapTrap " << _name << " attacks " << target;
	std::cout << ", causing " << _attack << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_pts <= 0)
	{
		std::cout << _name << "can't take damage if dead...";
		std::cout << std::endl;
		return ;
	}
	if (amount >= _hit_pts)
		_hit_pts = 0;
	else
		_hit_pts -= amount;
	std::cout << _name << " has taken " << amount;
	std::cout << " points of damage." << std::endl;
	std::cout << "He has " << _hit_pts << " hit points left." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hit_pts <= 0)
	{
		std::cout << _name << "can't be repaired if dead!";
		std::cout << std::endl;
		return ;
	}
	if (_nrg_pts <= 0)
	{
		std::cout << _name << "can't get repaired without energy!";
		std::cout << std::endl;
		return ;
	}
	_nrg_pts -= 1;
	_hit_pts += amount;
	std::cout << _name << " has recovered ";
	std::cout << amount << " hit points." << std::endl;
	std::cout << "He has " << _hit_pts << " hit points now!" << std::endl;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lreille <lreille@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:20:05 by lreille           #+#    #+#             */
/*   Updated: 2023/04/26 21:05:44 by lreille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap bob("bob");
	FragTrap bib("bib");
//	bob.takeDamage(9);
	bib.attack("bob");
	bib.attack("bob");
//	bob.attack("bib");
	bib.takeDamage(35);
	bib.beRepaired(5);
	bib.guardGate();
	bib.highFivesGuys();
}

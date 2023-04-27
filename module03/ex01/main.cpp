/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lreille <lreille@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:20:05 by lreille           #+#    #+#             */
/*   Updated: 2023/04/26 18:06:09 by lreille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
//	ClapTrap bob("bob");
	ScavTrap bib("bib");
//	bob.takeDamage(9);
	bib.attack("bob");
//	bob.attack("bib");
//	bob.beRepaired(5);
	bib.guardGate();
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:46:36 by mtaib             #+#    #+#             */
/*   Updated: 2023/08/08 18:01:30 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "A ScavTrap is constructed" << std::endl;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
	std::cout << "ScavTrap " << Name << " is constructed" << std::endl;
	_hitpoints = 100;
	_energypoints = 50;
	_attackdamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "A ScavTrap is destructed" << std::endl;

}

void	ScavTrap::guardGate() 
{
	std::cout << "ScavTrap " << _name << " is now in gate keeper mode" << std::endl;
}

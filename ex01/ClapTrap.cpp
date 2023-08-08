/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 20:26:17 by mtaib             #+#    #+#             */
/*   Updated: 2023/08/08 13:31:26 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap has been created" << std::endl;
}

ClapTrap::ClapTrap(std::string Name)
{
	std::cout << "ClapTrap " << Name << " has been created" << std::endl;
	_name = Name;
	_hitpoints = 10;
	_energypoints = 10;
	_attackdamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " has been destructed" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (!_energypoints || !_hitpoints)
		return ;
	std::cout << "ClapTrap " << _name << " attacks " << target << " , causing " << _attackdamage << " points of damage!" << std::endl;
	if (_energypoints)
		_energypoints--;	
	if (_hitpoints)
		_hitpoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " has taken damage" << std::endl;
	if (_hitpoints <= 0)
		_hitpoints = 0;
	else
		_hitpoints -= amount;
	if (_energypoints)
		_energypoints--;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!_energypoints || !_hitpoints)
		return ;
	std::cout << "ClapTrap " << _name << " has been repeared" << std::endl;
	if (_energypoints)
		_energypoints--;	
	_hitpoints += amount;
}

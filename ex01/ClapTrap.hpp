/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 12:52:46 by mtaib             #+#    #+#             */
/*   Updated: 2023/08/08 16:53:44 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{
	public :
		ClapTrap();
		~ClapTrap();
		ClapTrap(std::string Name);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	protected :
		std::string		_name;
		int		_hitpoints;
		int		_energypoints;
		int		_attackdamage;

};

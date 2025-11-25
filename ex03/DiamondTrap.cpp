/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hparveen <hparveen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 09:32:13 by hparveen          #+#    #+#             */
/*   Updated: 2025/11/25 09:52:26 by hparveen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name")
{
    _name = "Default";
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;

    std::cout << BLUE << "DiamondTrap Default constructor called for " << _name << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name")
{
    _name = name;
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;

    std::cout << BLUE << "DiamondTrap Parameterized constructor called for " << _name << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), FragTrap(other), ScavTrap(other)
{
    _name = other._name;
    std::cout << YELLOW << "DiamondTrap Copy constructor called for " << _name << RESET << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    if(this != &other)
    {
        ClapTrap::operator=(other);
        _name = other._name;
    }
    std::cout << YELLOW << "DiamondTrap Copy assignment operator called for " << _name << RESET << std::endl;
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << RED << "DiamondTrap Destructor called for " << _name << RESET << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << CYAN << "DiamondTrap name: " << _name << ", ClapTrap name: " << ClapTrap::_name << RESET << std::endl;
}


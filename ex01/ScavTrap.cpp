/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hparveen <hparveen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 08:57:38 by hparveen          #+#    #+#             */
/*   Updated: 2025/11/24 11:45:04 by hparveen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << BLUE << "ScavTrap " << _name << " created with default constructor." << RESET<< std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << BLUE << "ScavTrap " << _name << " created with parameterized constructor." << RESET<< std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    std::cout << YELLOW << "ScavTrap " << _name << " created with copy constructor." << RESET<< std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    if(this != &other)
    {
        ClapTrap ::operator=(other);
    }
    std::cout << YELLOW << "ScavTrap " << _name << " assigned with copy assignment operator." << RESET<< std::endl;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << RED << "ScavTrap " << _name << " destroyed." << RESET<< std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if(_hitPoints <= 0 )
    {
        std::cout << MAGENTA << "ScavTrap " << _name << " is dead and cannot attack." << RESET<< std::endl;
        return;
    }
    if(_energyPoints <= 0)
    {
        std::cout << MAGENTA << "ScavTrap " << _name << " has no energy left to attack." << RESET<< std::endl;
        return;
    }
    _energyPoints--;
    std::cout << CYAN << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << RESET<< std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << GREEN << "ScavTrap " << _name << " is now in Gate Keeper mode." << RESET<< std::endl;
}

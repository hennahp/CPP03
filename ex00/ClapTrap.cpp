/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hparveen <hparveen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 12:20:08 by hparveen          #+#    #+#             */
/*   Updated: 2025/11/19 13:39:17 by hparveen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    _name = "Default";
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    std::cout << BLUE << "ClapTrap " << _name << " created with default constructor." << RESET<< std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << BLUE << "ClapTrap " << _name << " created with parameterized constructor." << RESET<< std::endl;
}

ClapTrap:: ClapTrap(const ClapTrap &other)
{
    *this = other;
    std::cout << YELLOW << "ClapTrap " << _name << " created with copy constructor." << RESET<< std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    if(this != &other)
    {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << RED << "ClapTrap " << _name << " destroyed." << RESET<< std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if(_hitPoints == 0 || _energyPoints == 0)
    {
        std::cout << MAGENTA << "ClapTrap " << _name << " cannot attack. Insufficient hit points or energy points." << RESET<< std::endl;
        return;
    }
    _energyPoints--;
    std::cout << CYAN << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << RESET<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(_hitPoints <= amount)
        _hitPoints = 0;
    else
        _hitPoints -= amount;

    std::cout << MAGENTA << "ClapTrap " << _name << " takes " << amount << " points of damage! Remaining hit points: " << _hitPoints << RESET<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(_hitPoints == 0 || _energyPoints == 0)
    {
        std::cout << MAGENTA << "ClapTrap " << _name << " cannot be repaired. Insufficient hit points or energy points." << RESET<< std::endl;
        return;
    }
    _hitPoints += amount;
    _energyPoints--;
    std::cout << GREEN << "ClapTrap " << _name << " is repaired by " << amount << " points! Current hit points: " << _hitPoints << RESET<< std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hparveen <hparveen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 13:32:21 by hparveen          #+#    #+#             */
/*   Updated: 2025/11/25 09:12:14 by hparveen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;

    std::cout << GREEN << "FragTrap Default constructor called for " << _name << RESET << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;

    std::cout << GREEN << "FragTrap Parameterized constructor called for " << _name << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) :ClapTrap(other)
{
    std::cout << YELLOW << "FragTrap Copy constructor called for " << _name << RESET << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if(this != &other)
    {
        ClapTrap::operator=(other);
    }
    std::cout << YELLOW << "FragTrap Copy assignment operator called for " << _name << RESET << std::endl;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << RED << "FragTrap Destructor called for " << _name << RESET << std::endl;
}

void FragTrap::attack(const std::string &target)
{
    if(_hitPoints <= 0 )
    {
        std::cout << MAGENTA << "FragTrap " << _name << " is dead and cannot attack." << RESET<< std::endl;
        return;
    }
    if(_energyPoints <= 0)
    {
        std::cout << MAGENTA << "FragTrap " << _name << " has no energy left to attack." << RESET<< std::endl;
        return;
    }
    _energyPoints--;
    std::cout << CYAN << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << RESET<< std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << GREEN << "FragTrap " << _name << " is requesting a high five ✋😄" << RESET<< std::endl;
}

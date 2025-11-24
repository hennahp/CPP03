/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hparveen <hparveen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 08:57:34 by hparveen          #+#    #+#             */
/*   Updated: 2025/11/24 13:26:10 by hparveen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "\n--- Creating ScavTrap ---\n" << std::endl;
    ScavTrap scav("Serena");
    
    std::cout << "\n--- Testing Attack ---\n" << std::endl;
    scav.attack("Target Bot");

    std::cout << "\n--- Testing special ability ---\n" << std::endl;
    scav.guardGate();

    std::cout << "\n--- Testing Copy Constructor ---\n" << std::endl;
    ScavTrap scavClone(scav);
    scavClone.attack("Clone Target Bot");

    std::cout << "\n--- Testing Copy Assignment Constructor ---\n" << std::endl;
    ScavTrap scavCopy;
    scavCopy = scav;

    std::cout << "\n--- Testing Damage and Repair ---\n" << std::endl;
    scav.takeDamage(30);
    scav.beRepaired(20);
    
    std::cout << "\n--- Destroying ScavTrap ---\n" << std::endl;
    return 0;
}
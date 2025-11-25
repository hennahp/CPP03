/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hparveen <hparveen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 08:57:34 by hparveen          #+#    #+#             */
/*   Updated: 2025/11/25 10:02:03 by hparveen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
    std::cout << "\n--- Creating DiamondTrap ---\n";
    DiamondTrap diamond("Diamondy");

    std::cout << "\n--- DiamondTrap actions ---\n";
    diamond.attack("TargetDummy");
    diamond.takeDamage(20);
    diamond.beRepaired(10);
    
    std::cout << "\n--- Testing Special Abilities ---\n" << std::endl;
    diamond.whoAmI();
    diamond.guardGate();
    diamond.highFivesGuys();

    std::cout << "\n--- Energy Exhaustion Test ---\n";
    for (int i = 0; i < 60; i++)
        diamond.attack("Training Dummy");

    std::cout << "\n--- Default Constructor ---\n";
    DiamondTrap defaultDiamond;
    defaultDiamond.whoAmI();
    defaultDiamond.attack("Another Dummy");

    std::cout << "\n--- Copy Constructor ---\n";
    DiamondTrap copyDiamond(diamond);
    copyDiamond.whoAmI();
    copyDiamond.attack("Copy Target");

    std::cout << "\n--- Copy Assignment Operator ---\n";
    DiamondTrap assignedDiamond;
    assignedDiamond = diamond;
    assignedDiamond.whoAmI();
    assignedDiamond.attack("Assigned Target");
    
    std::cout << "\n--- End of program ---\n";
    return 0;
}
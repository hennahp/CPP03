/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hparveen <hparveen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 08:57:34 by hparveen          #+#    #+#             */
/*   Updated: 2025/11/25 09:12:56 by hparveen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
    std::cout << "\n=== Creating FragTrap ===\n";
    FragTrap frag("Fraggy");

    std::cout << "\n=== Creating ScavTrap ===\n";
    ScavTrap scav("Scavvy");

    std::cout << "\n=== FragTrap actions ===\n";
    frag.attack("TargetDummy");
    frag.highFivesGuys();

    std::cout << "\n=== ScavTrap actions ===\n";
    scav.guardGate();
    scav.attack("Target2");

    std::cout << "\n=== End of program ===\n";
    return 0;
}
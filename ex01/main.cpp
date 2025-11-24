/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hparveen <hparveen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 08:57:34 by hparveen          #+#    #+#             */
/*   Updated: 2025/11/24 09:00:06 by hparveen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "\n--- Creating ClapTraps ---\n" << std::endl;
	ClapTrap a("Alpha");
	ClapTrap b("Beta");
    ClapTrap c;

    std::cout << "\n--- Basic actions ---\n" << std::endl;
    a.attack("Beta");
    b.takeDamage(5);
    b.beRepaired(3);

    std::cout << "\n--- Energy Exhaustion Test ---\n" << std::endl;
    for (int i = 0; i < 12; i++)
        a.attack("Dummy Target");
    
    std::cout << "\n--- Damage and Death Test ---\n" << std::endl;
    b.takeDamage(100);
    b.attack("Alpha");
    b.beRepaired(10);

    std::cout << "\n Using Default Constructor \n" << std::endl;

    c.attack("Alpha");
    c.takeDamage(2);
    c.beRepaired(1);

    std::cout << "\n--- End of Simulation ---\n" << std::endl;
    return 0;
}
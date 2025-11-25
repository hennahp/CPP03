/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hparveen <hparveen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 13:32:17 by hparveen          #+#    #+#             */
/*   Updated: 2025/11/25 08:19:55 by hparveen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
    FragTrap();
    FragTrap(const std::string &name);
    FragTrap(const FragTrap &other);
    FragTrap &operator=(const FragTrap &other);
    ~FragTrap();

    void attack(const std::string &target);
    void highFivesGuys(void);
};

#endif
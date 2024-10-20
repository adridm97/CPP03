/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduenas- <aduenas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:40:21 by adrian            #+#    #+#             */
/*   Updated: 2024/10/20 18:17:09 by aduenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{

    ClapTrap claptrap("Clappy");
    claptrap.attack("target1");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);
    
    ScavTrap scavtrap("Scavy");
    scavtrap.attack("target2");
    scavtrap.takeDamage(15);
    scavtrap.beRepaired(5);
    scavtrap.guardGate();

    return 0;
}
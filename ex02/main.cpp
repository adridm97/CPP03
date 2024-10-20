/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduenas- <aduenas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:40:21 by adrian            #+#    #+#             */
/*   Updated: 2024/10/20 17:55:53 by aduenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

    FragTrap frag("Fraggy");
    frag.attack("Target");
    frag.highFivesGuys();
    frag.beRepaired(50);
    frag.takeDamage(30);
    
    return 0;
}
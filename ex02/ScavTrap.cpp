/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:25:05 by adrian            #+#    #+#             */
/*   Updated: 2024/10/06 19:28:28 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " created" << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " created" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
    *this = other;
    std::cout << "ScavTrap " << _name << " copied" << std::endl;
}
ScavTrap& ScavTrap::operator=(const ScavTrap &other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}
ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << _name << " destroyed" << std::endl;
}
void ScavTrap::attack(const std::string &target) {
    if (_hitPoints > 0 && _energyPoints > 0) {
        _energyPoints--;
        std::cout << "ScavTrap " << _name << " attacks to " << target << " having " << _attackDamage << " damage points!" << std::endl;
    } else {
        std::cout << "ScavTrap " << _name << " needs more energy!" << std::endl;
    }
}
void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " in mode Gatekeeper!" << std::endl;
}
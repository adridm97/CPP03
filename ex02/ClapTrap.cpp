/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduenas- <aduenas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:59:44 by adrian            #+#    #+#             */
/*   Updated: 2024/10/20 18:17:08 by aduenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) 
{
    std::cout << "ClapTrap " << _name << " created (for default)" << std::endl;
}
ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) 
{
    std::cout << "ClapTrap " << _name << " created" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &other)
{
    *this = other;
    std::cout << "ClapTrap " << _name << " copied" << std::endl;
}
ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "ClapTrap " << _name << " operator assignment called" << std::endl;
    if (this != &other)
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
    std::cout << "ClapTrap " << _name << " destroyed" << std::endl;
}
void ClapTrap::attack(const std::string &target) 
{
    if (_hitPoints > 0 && _energyPoints > 0) 
    {
        _energyPoints--;
        std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!" << std::endl;
    } 
    else 
        std::cout << "ClapTrap " << _name << " doesn't have suficient hit points!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount) 
{
    _hitPoints -= amount;
    if (_hitPoints < 0) _hitPoints = 0;
    std::cout << "ClapTrap " << _name << " recieves " << amount << " points of damage, now have " << _hitPoints << " health points!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount) 
{
    if (_hitPoints > 0 && _energyPoints > 0)
    {
        _energyPoints--;
        _hitPoints += amount;
        std::cout << "ClapTrap " << _name << " is repared " << amount << " health points, now have " << _hitPoints << " health points!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << _name << " doesn't have any health to be repaired!" << std::endl;
}
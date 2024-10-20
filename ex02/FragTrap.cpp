/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduenas- <aduenas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 19:50:38 by adrian            #+#    #+#             */
/*   Updated: 2024/10/20 18:17:06 by aduenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) :  ClapTrap(name)
{
    _hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " constructed." << std::endl;
};
FragTrap::FragTrap(const FragTrap &other)
{
    *this = other;
    std::cout << "FragTrap " << _name << " copied" << std::endl;
}
FragTrap& FragTrap::operator=(const FragTrap &other)
{
    std::cout << "FragTrap " << _name << " operator assignment called" << std::endl;
    if (this != &other)
    {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}
FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " destroyed." << std::endl;
}
void FragTrap::attack(const std::string& target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
	{
        std::cout << "FragTrap " << _name << " attacks " << target
                  << ", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    } 
	else
        std::cout << "FragTrap " << _name << " cannot attack due to lack of energy or hit points." << std::endl;
}
void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " requests a high five!" << std::endl;
}
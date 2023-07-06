/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/07/06 16:17:49 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name) :\
 	name(name), hitPoints(10),\
	energyPoints(10), attackDamage(0){}

ClapTrap::ClapTrap(const ClapTrap& other) :\
 	name(other.name), hitPoints(other.hitPoints),\
	energyPoints(other.hitPoints), attackDamage(other.attackDamage){}

ClapTrap& ClapTrap::operator=(const ClapTrap& other){
	if (this == &other)
		return *this;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
	return *this;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap :" + name + " is destroyed" << std::endl;	
}
	
void ClapTrap::attack(const std::string& target){
	if (energyPoints == 0 || hitPoints == 0){
		std::cout << "Claptrap " + name + " can't attack" << std::endl;
	}else{
		std::cout << \
		"ClapTrap " + name + " attacks " + target + ", causing " + \
		std::to_string(attackDamage) + " points of damage!" << std::endl;	
		energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	if (energyPoints == 0 || hitPoints == 0){
		std::cout << "Claptrap " + name + " can't take damage" << std::endl;
	}else{
		if (hitPoints < amount){
			hitPoints = 0;
		}else{
			hitPoints -= amount;
		}
		std::cout << \
		"ClapTrap " + name + " takes " + \
		std::to_string(amount) + " points of damage!" << std::endl;	
	}
}

void ClapTrap::beRepaired(unsigned int amount){
	if (energyPoints == 0 || hitPoints == 0){
		std::cout << "Claptrap " + name + " can't be repaired" << std::endl;
	}else{
		if (hitPoints > 0xFFFFFFFF - amount){
			hitPoints = 0xFFFFFFFF;
		}else{
			hitPoints += amount;
		}
		std::cout << \
		"ClapTrap " + name + " takes " + \
		std::to_string(amount) + " repaired points!" << std::endl;	
		energyPoints--;
	}
}

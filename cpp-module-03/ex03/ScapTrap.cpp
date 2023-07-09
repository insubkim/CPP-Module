/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/07/07 14:47:11 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScapTrap.hpp"

ScapTrap::ScapTrap() : ClapTrap() {
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	gateKeeperMode = false;
	std::cout << "Default ScapTrap :" + this->name + " is constructed" << std::endl;
}
ScapTrap::ScapTrap(const std::string& name) : ClapTrap(name) {
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	gateKeeperMode = false;
	std::cout << "ScapTrap :" + this->name + " is constructed" << std::endl;
};

ScapTrap::ScapTrap(const ScapTrap& other) : ClapTrap(other.name) {
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
	gateKeeperMode = other.gateKeeperMode;
	std::cout << "ScapTrap :" + this->name + " is constructed" << std::endl;
}

ScapTrap::~ScapTrap(){
	std::cout << "ScapTrap :" + name + " is destroyed" << std::endl;
}

ScapTrap& ScapTrap::operator=(const ScapTrap& other){
	if (this == &other)
		return *this;
	ClapTrap::operator=(other);
	gateKeeperMode = other.gateKeeperMode;
	return *this;
}
	
void ScapTrap::attack(const std::string& target){
	if (energyPoints == 0 || hitPoints == 0){
		std::cout << name + " can't attack" << std::endl;
	}else if (gateKeeperMode){
		std::cout << "ScapTrap :" + name + " is gate keeper mode, I can't attack" << std::endl;
	}else{
		std::cout << name + " attacks " + target + ", causing " + \
		std::to_string(attackDamage) + " points of damage!" << std::endl;	
		energyPoints--;
	}
}

void ScapTrap::guardGate(){
	if (energyPoints == 0 || hitPoints == 0){
		std::cout << name + " can't change mode" << std::endl;
	}else if (gateKeeperMode){
		std::cout << "ScapTrap :" + name + " is already gate keeper mode" << std::endl;
	}else{
		gateKeeperMode = 1;
		std::cout << "ScapTrap :" + name + " is gate keeper mode" << std::endl;
	}
}
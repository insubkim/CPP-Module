/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FrogTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/07/06 19:02:55 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FrogTrap.hpp"

FrogTrap::FrogTrap() : ClapTrap() {
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "Default FrogTrap :" + name + " is constructed" << std::endl;
}
FrogTrap::FrogTrap(const std::string& name) : ClapTrap(name) {
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FrogTrap :" + name + " is constructed" << std::endl;
};

FrogTrap::FrogTrap(const FrogTrap& other) : ClapTrap(other.name) {
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
	std::cout << "FrogTrap :" + name + " is constructed" << std::endl;
}

FrogTrap::~FrogTrap(){
	std::cout << "FrogTrap :" + name + " is destroyed" << std::endl;
}

FrogTrap& FrogTrap::operator=(const FrogTrap& other){
	if (this == &other)
		return *this;
	ClapTrap::operator=(other);
	return *this;
}

void FrogTrap::highFivesGuys(void){
	if (energyPoints == 0 || hitPoints == 0){
		std::cout << name + " can't highfive" << std::endl;
	}else{
		std::cout << name + " H I G H F I V E !" << std::endl;
	}
}
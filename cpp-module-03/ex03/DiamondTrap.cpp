/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/07/07 15:16:14 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("NULL_clap_trap"), ScapTrap(), FrogTrap(), name("NULL") {
	energyPoints = 50;
	std::cout << "Default DiamondTrap :" + name + " is constructed" << std::endl;
}


DiamondTrap::DiamondTrap(const DiamondTrap& other) :\
	 ClapTrap(other.name + "_clap_name"), ScapTrap(other), FrogTrap(other) , 	name(other.name){
	energyPoints = 50;
	std::cout << "DiamondTrap :" + name + " is constructed" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), ScapTrap(name), FrogTrap(name), name(name) {
	energyPoints = 50;
	std::cout << "DiamondTrap :" + name + " is constructed" << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap :" + name + " is destroyed" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other){
	if (this == &other)
		return *this;
	ScapTrap::operator=(other);
	return *this;
}

void	DiamondTrap::whoAmI() const{
	std::cout << "DiamondTrap name :" + name << std::endl;
	std::cout << "ClapTrap name :" + ClapTrap::name << std::endl;
}


void	DiamondTrap::status() const{
	std::cout << "DiamondTrap status" << std::endl;
	whoAmI();
	std::cout << "ScapTrap name :"  + ScapTrap::name << std::endl;
	std::cout << "FrogTrap name :"  + FrogTrap::name << std::endl;
	std::cout << "hit :"  + std::to_string(hitPoints)<< std::endl;
	std::cout << "energy :" + std::to_string(energyPoints)<< std::endl;
	std::cout << "attackDamage :" + std::to_string(attackDamage) << std::endl;
	std::cout << "mode :" << (gateKeeperMode ? "guardGate" : "not guardGate") << std::endl;
}
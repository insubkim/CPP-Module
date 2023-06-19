/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/06/13 19:24:41 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
    this->name = name;
    armed = !ARMED;
}

void    HumanB::attack() const{
    if (armed == ARMED)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " is nor armed " <<std::endl;    
}
void    HumanB::setWeapon(Weapon &weapon){
    this->weapon = &weapon;
    armed = ARMED;
}
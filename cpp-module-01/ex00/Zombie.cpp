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

#include "Zombie.hpp"

Zombie::Zombie(const std::string &name){
    this->name = name;
}

Zombie::~Zombie(){
    std::cout << name << " Zombie instance destroyed" << std::endl;
}

void    Zombie::announce() const{
    std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
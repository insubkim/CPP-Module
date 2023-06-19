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
#include <iostream>

Zombie::Zombie(){

}

Zombie::Zombie(std::string name){
    this->name = name;
}

void    Zombie::announce()const{
    std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::set_name(const std::string name){
    this->name = name;
}

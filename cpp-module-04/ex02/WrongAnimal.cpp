/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/07/07 14:54:20 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type(""){
    std::cout << "Default WrongAnimal Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type){
    std::cout << "(" + type + ") WrongAnimal Copy Constructor called" << std::endl;
}


WrongAnimal::WrongAnimal(const std::string type) : type(type){
    std::cout << "(" + type + ") WrongAnimal Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "(" + type + ") WrongAnimal Destructor called" << std::endl;
}

const WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other){
    if (this == &other)
        return *this;
    type = other.type;
    return *this;
}

const std::string& WrongAnimal::getType() const{
    return type;
}

void WrongAnimal::makeSound() const {}
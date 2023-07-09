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

#include "Animal.hpp"

Animal::Animal() : type(""){
    std::cout << "Default Animal Constructor called" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type){
    std::cout << "(" + type + ") Animal Copy Constructor called" << std::endl;
}


Animal::Animal(const std::string type) : type(type){
    std::cout << "(" + type + ") Animal Constructor called" << std::endl;
}

Animal::~Animal(){
    std::cout << "(" + type + ") Animal Destructor called" << std::endl;
}

const Animal& Animal::operator=(const Animal& other){
    if (this == &other)
        return *this;
    type = other.type;
    return *this;
}

void Animal::makeSound() const {}

const std::string& Animal::getType() const{
    return type;
}
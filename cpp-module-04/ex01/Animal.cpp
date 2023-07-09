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

Animal::Animal() : type(""), brain(0){
    std::cout << "Default Animal Constructor called" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type){
    if (brain)
        delete brain;
    brain = new Brain();
    for (int i = 0; i < 100; i++){
        brain->setIndexIdea(i, other.brain->getIndexIdea(i));
    }
    std::cout << "(" + type + ") Animal Copy Constructor called" << std::endl;
}


Animal::Animal(const std::string type) : type(type), brain(0){
    std::cout << "(" + type + ") Animal Constructor called" << std::endl;
}

Animal::~Animal(){
    if (brain)
        delete brain;
    std::cout << "(" + type + ") Animal Destructor called" << std::endl;
}

const Animal& Animal::operator=(const Animal& other){
    if (this == &other)
        return *this;
    type = other.type;
    if (brain)
        delete brain;
    brain = new Brain();
    for (int i = 0; i < 100; i++){
        brain->setIndexIdea(i, other.brain->getIndexIdea(i));
    }
    return *this;
}

void Animal::makeSound() const {}

const std::string& Animal::getType() const{
    return type;
}
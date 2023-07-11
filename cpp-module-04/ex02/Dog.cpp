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

#include "Dog.hpp"


Dog::Dog() : Animal("Dog") {
    brain = new Brain();
    std::cout << "Default Dog Constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other.type) {
    brain = new Brain();
    for (int i = 0; i < 100; i++)
        brain->setIndexIdea(i, other.brain->getIndexIdea(i));
    std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog::~Dog(){
    delete brain;
    std::cout << "Dog Destructor called" << std::endl;
}

const Dog& Dog::operator=(const Dog& other){
    if (this == &other)
        return *this;
    type = other.type;
    if (brain)
        delete brain;
    brain = new Brain();
    for (int i = 0; i < 100; i++)
        brain->setIndexIdea(i, other.brain->getIndexIdea(i));
    return *this;
}

void    Dog::makeSound() const{
    std::cout << "Bark Bark Bark" << std::endl;
}
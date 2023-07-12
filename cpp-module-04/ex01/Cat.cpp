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

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
    brain = new Brain();
    std::cout << "Default Cat Constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other.type) {
    brain = new Brain(other.brain);
    std::cout << "Cat Copy Constructor called" << std::endl;
}

Cat::~Cat(){
    if (brain)
        delete brain;
    std::cout << "Cat Destructor called" << std::endl;
}

const Cat& Cat::operator=(const Cat& other){
    if (this == &other)
        return *this;
    type = other.type;
    if (brain)
        delete brain;
    brain = new Brain(other.brain);
    return *this;
}

void    Cat::makeSound() const{
    std::cout << "Meow Meow Meow" << std::endl;
}
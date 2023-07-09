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

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
    std::cout << "Default WrongCat Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other.type) {
    std::cout << "WrongCat Copy Constructor called" << std::endl;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat Destructor called" << std::endl;
}

const WrongCat& WrongCat::operator=(const WrongCat& other){
    if (this == &other)
        return *this;
    type = other.type;
    return *this;
}

void    WrongCat::makeSound() const{
    std::cout << "Meow Meow Meow" << std::endl;
}
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

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Default Brain Constructor called" << std::endl;
}

Brain::Brain(const Brain& other){
    for (int i = 0; i < 100; i++){
        ideas[i] = other.ideas[i];
    }
    std::cout << "Brain Copy Constructor called" << std::endl;
}

Brain::~Brain(){
    std::cout << "Brain Destructor called" << std::endl;
}

const Brain& Brain::operator=(const Brain& other){
    if (this == &other)
        return *this;
    for (int i = 0; i < 100; i++){
        ideas[i] = other.ideas[i];
    }
    return *this;
}

std::string Brain::getIndexIdea(int i) const{
    if (i >= 100)
        return "";
    return ideas[i];
}

void Brain::setIndexIdea(int i, const std::string& idea){
    if (i >= 100)
        return;
    ideas[i] = idea;
}

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

#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
public :
    WrongAnimal();
    WrongAnimal(const WrongAnimal& other);
    virtual ~WrongAnimal();
    const WrongAnimal& operator=(const WrongAnimal& other);
    
    const std::string& getType() const;
    void makeSound() const;
protected :
    WrongAnimal(const std::string type);
    std::string type;
};

#endif
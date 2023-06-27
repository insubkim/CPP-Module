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

#ifndef HUMANB_HPP
# define HUMANB_HPP
# define ARMED 1

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB{
private:
    std::string     name;
    const Weapon    *weapon;
    bool            armed;
public:
    HumanB(const std::string &type);
    void    attack() const;
    void    setWeapon(const Weapon &weapon);
};

#endif
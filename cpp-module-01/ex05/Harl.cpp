/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/06/27 19:43:58 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
	f[0] = &Harl::debug;
	f[1] = &Harl::info;
	f[2] = &Harl::warning;
	f[3] = &Harl::error;
	f[4] = &Harl::invalidLevel;
}

void Harl::debug(){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::invalidLevel(){
	std::cout << "invalid level" << std::endl;
}

long long	Harl::hash(const std::string &level) const{
	long long hashValue = 0;
	if (level.size() > 7)
		return (4);
	for (int i = 0; i < (int)level.size(); i++)
		hashValue += level[i] << (i * 8);
	return hashValue;
}

void Harl::complain(const std::string &level){
	switch (hash(level))
	{
	case (DEBUG_HASH_VALUE) :
		(this->*f[0])();
		break;
	case (INFO_HASH_VALUE) :
		(this->*f[1])();
		break;
	case (WARNING_HASH_VALUE) :
		(this->*f[2])();
		break;
	case (ERROR_HASH_VALUE) :
		(this->*f[3])();
		break;
	default:
		(this->*f[4])();
		break;
	}
}

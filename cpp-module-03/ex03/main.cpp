/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/07/07 15:18:01 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(){
	DiamondTrap a("BOB");
	a.takeDamage(10);
	a.guardGate();
	a.attack("SPONGE");
	a.status();
	
	DiamondTrap b("SQUID");
	b = a;
	b.status();
	b.attack("SPONGE");
	
	return 0;
}
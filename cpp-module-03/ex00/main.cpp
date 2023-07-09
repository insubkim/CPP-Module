/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/07/07 15:08:31 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
	ClapTrap a("BOB");

	a.attack("SPONGE");
	for (int i = 1; i <= 11; i++)
		a.takeDamage(1);
	a.beRepaired(10);
	a.attack("SPONGE");
	a.takeDamage(1000);
	ClapTrap b = a;
	b.attack("SPONGE");
	ClapTrap c(a);
	b.attack("SPONGE");
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/07/06 19:06:57 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FrogTrap.hpp"

int main(){
	FrogTrap a("bob");
	a.takeDamage(1);
	a.attack("SPONGE");
	a.highFivesGuys();
	a.takeDamage(10000);
	FrogTrap b = a;
	a.highFivesGuys();
	
	ClapTrap *k = new FrogTrap("new bob");
	k->attack("new SPONGE");
	delete k;
}
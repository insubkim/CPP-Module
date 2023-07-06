/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/07/06 19:08:16 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScapTrap.hpp"

int main(){
	ScapTrap a("bob");
	a.takeDamage(1);
	a.guardGate();
	a.takeDamage(1);
	a.attack("SPONGE");
	ScapTrap b(a);
	a.attack("SPONGE");
	ScapTrap c = a;
	a.attack("SPONGE");

	ClapTrap *k = new ScapTrap("new bob");
	k->attack("new SPONGE");
	delete k;
}
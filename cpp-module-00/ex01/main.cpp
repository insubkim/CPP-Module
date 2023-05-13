/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 03:07:34 by inskim            #+#    #+#             */
/*   Updated: 2023/05/13 09:03:17 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

void	hi(Contact c){

	std::cout << "new\n" << c.get_first_name() << c.get_last_name() << c.get_nick_name() << c.get_secret() << std::endl;
}

int	main(){
	Contact c("kim", "insub", "inskim", "fuck");
	std::cout << c.get_first_name() << c.get_last_name() << c.get_nick_name() << c.get_secret() << std::endl;
	hi(c);
	system("leaks a.out");
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 03:07:34 by inskim            #+#    #+#             */
/*   Updated: 2023/06/17 08:44:36 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iomanip>

int	main(void){
	std::string cmd;
	PhoneBook p;
	std::cout << "This is Phonebook welcome welcome" << std::endl;
	while (1){
		std::cout << "only put ADD or SEARCH or EXIT" << std::endl;
		std::cin >> cmd;
		if (std::cin.eof()){
			std::cout << "EOF is entered program exit" << std::endl;
			break ;
		}else if (std::cin.fail()){
			std::cout << "cin fail program exit" << std::endl;
			break ;
		}
		if (cmd == "ADD"){
			p.add();
		}else if (cmd == "SEARCH"){
			p.search();
		}else if (cmd == "EXIT"){
			break ;
		}
	}
	return (0);
}
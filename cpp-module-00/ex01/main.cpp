/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 03:07:34 by inskim            #+#    #+#             */
/*   Updated: 2023/06/13 19:01:51 by inskim           ###   ########.fr       */
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 03:07:34 by inskim            #+#    #+#             */
/*   Updated: 2023/06/13 17:21:07 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void){
	std::string cmd;
	PhoneBook p;
	while (1){
		std::cin >> cmd;
		if (cmd == "ADD"){
			p.add();
		}else if (cmd == "SEARCH"){
			p.search();
		}else if (cmd == "EXIT"){
			break ;
		}else{
			std::cout << "only put ADD or SEARCH or EXIT" << std::endl;
		}
	}
	return (0);
}
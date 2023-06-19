/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 02:59:27 by inskim            #+#    #+#             */
/*   Updated: 2023/06/19 19:50:39 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# define FIRST_NAME 1
# define LAST_NAME 2
# define NICK_NAME 3
# define PHONE_NUMBER 4
# define SECRET 5
# define PHONEBOOK_SIZE 8

#include <string>
#include "Contact.hpp"

class PhoneBook{
private:
	Contact	*c[PHONEBOOK_SIZE];
	int	front;
	int rear;
	int size;

	static	std::string	get_line(int f){
		if (f == FIRST_NAME){
			std::cout << "Put firstname" << std::endl;
		}else if (f == LAST_NAME){
			std::cout << "Put lastname" << std::endl;
		}else if (f == NICK_NAME){
			std::cout << "Put nickname" << std::endl;
		}else if (f == PHONE_NUMBER){
			std::cout << "Put phone number" << std::endl;
		}else{
			std::cout << "Put secret" << std::endl;
		}
		std::string s = "";
		while (s.empty()){
			std::getline(std::cin, s);
			if (std::cin.eof()){
				std::cout << "EOF is entered program exit" << std::endl;
				exit(0);
			}else if (std::cin.fail()){
				std::cout << "cin fail program exit" << std::endl;
				exit(0);
			}
		}
		return (s);
	}
	
public:
	PhoneBook();
	~PhoneBook();
	void	add();
	void	search()const;
};

#endif
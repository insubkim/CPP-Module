/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 02:59:27 by inskim            #+#    #+#             */
/*   Updated: 2023/06/21 18:44:59 by inskim           ###   ########.fr       */
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
	const std::string	get_line(int f);
	
public:
	PhoneBook();
	~PhoneBook();
	void	add();
	void	search()const;
};

#endif
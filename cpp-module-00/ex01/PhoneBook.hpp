/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 02:59:27 by inskim            #+#    #+#             */
/*   Updated: 2023/06/13 17:05:44 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# define FIRST_NAME 1
# define LAST_NAME 2
# define NICK_NAME 3
# define PHONE_NUMBER 4
# define SECRET 5



#include <string>
#include "Contact.hpp"

class PhoneBook{
private:
	Contact	c[8];
	int	front;
	int rear;
	int size;
public:
	PhoneBook(void);
	void	add();
	void	search();
};

#endif
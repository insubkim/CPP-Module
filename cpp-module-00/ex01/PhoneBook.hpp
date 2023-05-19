/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 02:59:27 by inskim            #+#    #+#             */
/*   Updated: 2023/05/20 05:18:34 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include "Contact.hpp"

class PhoneBook{
private:
	Contact::Contact	c[8];
	int	last;
public:
	PhoneBook(void);
	void	add_contact(Contact::Contact contact);
	void	display_contact(int	index);
	void	display_list(void);
};

#endif
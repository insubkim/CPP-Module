/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insub <insub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 02:59:27 by inskim            #+#    #+#             */
/*   Updated: 2023/05/13 16:39:34 by insub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include "Contact.hpp"

class PhoneBook{
private:
	Contact	c[8];
	
public:
	PhoneBook(void);
	void	set_contact(Contact c);
	Contact	&get_contact(int	index);
};

#endif
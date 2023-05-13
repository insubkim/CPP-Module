/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 02:59:27 by inskim            #+#    #+#             */
/*   Updated: 2023/05/13 09:05:09 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <string>

class PhoneBook{
private:
	Contact	c[8];
	int	i;
public:
	PhoneBook(void);
	set_contact(Contact c);
	get_contact(int	index);
}

#endif
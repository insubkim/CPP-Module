/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 03:01:17 by inskim            #+#    #+#             */
/*   Updated: 2023/05/13 08:59:26 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class	Contact{
private :
	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	secret;
public :
	Contact(std::string first_name, std::string last_name, std::string nick_name, std::string secret);
	Contact(const Contact& other);
	std::string	get_first_name(void);
	std::string	get_last_name(void);
	std::string	get_nick_name(void);
	std::string	get_secret(void);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/06/27 19:44:08 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# define DEBUG_HASH_VALUE 1430406539
# define INFO_HASH_VALUE 1330007625
# define WARNING_HASH_VALUE 1318686624
# define ERROR_HASH_VALUE 1330795159

#include <string>
#include <iostream>

class Harl
{
private:
	void		debug();
	void		info();
	void		warning();
	void		error();
	void		invalidLevel();
	long long	hash(const std::string &level) const;
	void		(Harl::*f[5])();
public:
	Harl();
	void complain(const std::string &level);
};

#endif
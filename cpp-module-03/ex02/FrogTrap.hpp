/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FrogTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/07/06 18:57:45 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FROGTRAP_HPP
# define FROGTRAP_HPP

#include "ClapTrap.hpp"

class	FrogTrap : public ClapTrap
{
public:
	FrogTrap();	
	FrogTrap(const std::string& name);
	FrogTrap(const FrogTrap& other);
	~FrogTrap();
	FrogTrap& operator=(const FrogTrap& other);

	void highFivesGuys(void);	
};

#endif
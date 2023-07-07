/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FrogTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insub <insub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/07/07 12:35:20 by insub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FROGTRAP_HPP
# define FROGTRAP_HPP

#include "ClapTrap.hpp"

class	FrogTrap : public virtual ClapTrap
{
public:
	FrogTrap();	
	FrogTrap(const std::string& name);
	FrogTrap(const FrogTrap& other);
	virtual ~FrogTrap();
	FrogTrap& operator=(const FrogTrap& other);

	void highFivesGuys(void);	
};

#endif
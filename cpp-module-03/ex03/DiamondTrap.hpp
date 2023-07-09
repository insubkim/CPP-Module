/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insub <insub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/07/08 16:12:16 by insub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScapTrap.hpp"
#include "FrogTrap.hpp"

class   DiamondTrap : public ScapTrap, public FrogTrap
{
public :
	DiamondTrap();
	DiamondTrap(const DiamondTrap& other);
	DiamondTrap(const std::string &name);
	~DiamondTrap();
	DiamondTrap& operator=(const DiamondTrap& other);
	
	void	whoAmI();
	void	status();
private :
	const std::string name;
};
#endif
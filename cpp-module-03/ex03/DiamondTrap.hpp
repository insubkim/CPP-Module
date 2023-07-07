/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/07/07 15:13:02 by inskim           ###   ########.fr       */
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
	
	void	whoAmI() const;
	void	status() const;
private :
	const std::string name;
};
#endif
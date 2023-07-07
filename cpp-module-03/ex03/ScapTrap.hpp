/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/07/07 14:25:12 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAPTRAP_HPP
# define SCAPTRAP_HPP

#include "ClapTrap.hpp"

class	ScapTrap : public virtual ClapTrap
{
public:
	ScapTrap();	
	ScapTrap(const std::string& name);
	ScapTrap(const ScapTrap& other);
	virtual ~ScapTrap();
	ScapTrap& operator=(const ScapTrap& other);
	
	void attack(const std::string& target);
	void guardGate();
protected:
	bool			gateKeeperMode;
};

#endif
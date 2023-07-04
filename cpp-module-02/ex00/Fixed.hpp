/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/07/04 13:13:03 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{
public :
	Fixed();
	Fixed(const Fixed &other);
	Fixed &operator =(const Fixed &other);
	~Fixed();
	
	int		getRawBits() const;
	void	setRawBits(int const raw);
private :
	int	num;
	static const int fractionalBits = 8;
};

#endif


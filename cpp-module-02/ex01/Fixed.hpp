/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/07/04 13:20:19 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
public :
	Fixed();
	Fixed(const Fixed &other);
	Fixed(const int num);
	Fixed(const float num);
	Fixed &operator =(const Fixed &other);
	~Fixed();
	
	int		getRawBits() const;
	void	setRawBits(int const raw);
	int		toInt() const;
	float	toFloat() const;
private :
	int	num;
	static const int fractionalBits = 8;
};

std::ostream&	operator<<(std::ostream& o, const Fixed &f);

#endif


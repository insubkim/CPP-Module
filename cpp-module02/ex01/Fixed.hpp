/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/06/29 19:19:51 by inskim           ###   ########.fr       */
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
	static const int fractional_bits;
};

#endif


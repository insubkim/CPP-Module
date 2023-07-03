/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insub <insub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/07/03 23:03:11 by insub            ###   ########.fr       */
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


	bool	operator <(const Fixed &other);
	bool	operator <=(const Fixed &other);
	bool	operator >(const Fixed &other);
	bool	operator >=(const Fixed &other);
	bool	operator ==(const Fixed &other);
	bool	operator !=(const Fixed &other);

	Fixed operator +(const Fixed &other);
	Fixed operator -(const Fixed &other);
	Fixed operator *(const Fixed &other);
	Fixed operator /(const Fixed &other);

private :
	int	num;
	static const int fractional_bits = 8;
};

std::ostream&	operator<<(std::ostream& o, const Fixed &f);

#endif


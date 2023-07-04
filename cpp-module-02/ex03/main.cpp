/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insub <insub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/07/04 23:20:37 by insub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {
    Point a(Fixed(-7.0f), Fixed(6.0f));
    Point b(Fixed(6.0f), Fixed(0.1f));
    Point c(Fixed(13.0f), Fixed(3.0f));
    Point p(Fixed(6.0f), Fixed(-3.1f));
    std::cout << bsp(a, b, c, p) << std::endl;
    std::cout << "============" << std::endl;    
    return 0;
}
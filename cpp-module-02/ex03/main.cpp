/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/07/04 18:26:24 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {
    Point a(Fixed(0.0f), Fixed(0.0f));
    Point b(Fixed(0.0f), Fixed(6.0f));
    Point c(Fixed(3.0f), Fixed(3.0f));
    Point p(Fixed(0.0f), Fixed(3.0f));
    std::cout << bsp(a, b, c, p) << std::endl;
    return 0;
}
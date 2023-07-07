/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:39:56 by inskim            #+#    #+#             */
/*   Updated: 2023/07/07 13:45:50 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


class A {
public:
  virtual void attack() {
    std::cout << "A's attack" << std::endl;
  }
};

class B : virtual public A {
public:
  void attack()  {
    std::cout << "B's attack" << std::endl;
  }
};

class C : virtual public A {
public:
	void	s(){
		std::cout << "a"<< std::endl;
 	}
};

class D : public B, public C {
	public:
	void	s2(){
		std::cout << "a2"<< std::endl;
 	}
};

int main() {
  D d;
  d.attack(); // B's attack
  return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:39:56 by inskim            #+#    #+#             */
/*   Updated: 2023/05/12 18:28:28 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Megaphone
{
	private:
		const static char *default_msg;
	public:
		void	turn_on(void);
		void	turn_on(char	*msg);
};

void	Megaphone::turn_on(void)
{
	{
		std::cout << default_msg << std::endl;
	}
}

void	Megaphone::turn_on(char	*msg)
{
	{
		std::cout << msg;
	}
}

const char	*Megaphone::default_msg = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

int	main(int argc, char *argv[])
{
	Megaphone m;
	if (--argc == 0)
		m.turn_on();
	else
	{
		while (argc--)
		{
			argv++;
			m.turn_on(*argv);
		}
		std::cout << std::endl;
	}
	return (0);
}
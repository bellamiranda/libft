/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecarval <jecarval@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:11:02 by jecarval          #+#    #+#             */
/*   Updated: 2023/12/23 18:23:42 by jecarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <cstring>
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return EXIT_SUCCESS;
	}
	for (int i = 0; i < strlen(argv[1]); i++)
		putchar(toupper(argv[1][i]));
	std::cout << std::endl;
	return EXIT_SUCCESS;
}
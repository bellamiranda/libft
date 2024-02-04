/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecarval <jecarval@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 22:23:05 by jecarval          #+#    #+#             */
/*   Updated: 2023/12/30 00:48:10 by jecarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	phonebook;
	std::string		com;

	while (1)
	{
		std::cout << "Insert command (ADD, SEARCH or EXIT): ";
		getline(std::cin, com);
		if (com == "ADD")
		{
			phonebook.addContact();
			continue;
		}
		else if (com == "SEARCH")
		{
			phonebook.searchContact();
			continue;
		}
		else if (com == "EXIT")
			break;
		else if (std::cin.eof())
		{
			std::cout << std::endl;
			return 0;
		}
		std::cout << "Unknown command" << std::endl;
	}
	return EXIT_SUCCESS;
}
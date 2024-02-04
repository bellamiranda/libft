/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecarval <jecarval@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 18:26:03 by jecarval          #+#    #+#             */
/*   Updated: 2023/12/30 00:53:38 by jecarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <algorithm>
#include <cctype>
#include <cstdlib>
#include <iostream>
#include <ostream>

int PhoneBook::index = 0;

void PhoneBook::addContact()
{
	std::string input;

	if (index > 7)
	{
		for (int j = 0; j < 7; j++)
			contacts[j] = contacts [j + 1];
		index -= 1;
	}

    while (1) {
        std::cout << "First Name: ";
        getline(std::cin, input);
        contacts[index].saveName(input);
        if (std::cin.eof())
		{
			std::cout << std::endl;
			exit(0);
		}
        if (!contacts[index].getName().empty())
            break;
    }
	
    while (1) {
        std::cout << "Last Name: ";
        getline(std::cin, input);
        contacts[index].saveSurname(input);
        if (std::cin.eof())
		{
			std::cout << std::endl;
			exit(0);
		}
        if (!contacts[index].getSurname().empty())
            break;
    }

    while (1) {
        std::cout << "Nickname: ";
        getline(std::cin, input);
        contacts[index].saveNickname(input);
        if (std::cin.eof())
		{
			std::cout << std::endl;
			exit(0);
		}
        if (!contacts[index].getNickname().empty())
            break;
    }

    while (1) {
        std::cout << "Phone Number: ";
        getline(std::cin, input);
        contacts[index].saveNumber(input);
        if (std::cin.eof())
		{
			std::cout << std::endl;
			exit(0);
		}
        if (!contacts[index].getNumber().empty() && std::all_of(input.begin(), input.end(), ::isdigit))
            break;
    }

    while (1) {
        std::cout << "Darkest Secret: ";
        getline(std::cin, input);
        contacts[index].saveSecret(input);
        if (std::cin.eof())
		{
			std::cout << std::endl;
			exit(0);
		}
        if (!contacts[index].getSecret().empty())
            break;
    }

    index += 1;

	std::cout << "\nContact added." << std::endl << std::endl;
}

void display(std::string field)
{
    if (field.size() > 10)
        std::cout << std::setw(9) << std::right << field.substr(0, 9) << "." << "|";
    else
        std::cout << std::setw(10) << std::right << field << "|";
}

void PhoneBook::searchContact(void)
{
	if (PhoneBook::index == 0)
	{
		std::cout << "Phonebook is empty!" << std::endl;
		return;
	}
	std::cout << "\n|     Index|First Name| Last Name|  Nickname|" << std::endl;
	for (int i = 0; i < this->index; i++)
    {
        std::cout << "|" << std::right << std::setw(10) << i << "|";
        display(contacts[i].getName());
        display(contacts[i].getSurname());
        display(contacts[i].getNickname());
        std::cout << std::endl;
    }

    std::string index;
    int search;
    while (1)
    {
        std::cout << "\nWhat contact do you want to see?" << std::endl;
        getline(std::cin, index);
        if (std::cin.eof())
		{
			std::cout << std::endl;
			exit(0);
		}
        if (!index.empty() && index.find_first_not_of("0123456789") == std::string::npos)
        {
            search = atoi(index.c_str());
            if (search < 8)
                break;
        }
        std::cin.clear();
        std::cout << "Invalid index!" << std::endl;
    }
    if (search > this->index - 1)
        std::cout << "Contact doesn't exist." << std::endl;
    else
        {
        std::cout << "\nFist name: " << contacts[search].getName() << std::endl;
        std::cout << "Last name: " << contacts[search].getSurname() << std::endl;
        std::cout << "Nickname: " << contacts[search].getNickname() << std::endl;
        std::cout << "Phone number: " << contacts[search].getNumber() << std::endl;
        std::cout << "Darkest Secret: " << contacts[search].getSecret() << std::endl << std::endl;
    }
}

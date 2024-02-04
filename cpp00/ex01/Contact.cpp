/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <ismirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 22:21:45 by jecarval          #+#    #+#             */
/*   Updated: 2024/02/02 20:57:45 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::saveName(std::string name)
{
	this->name = name;
}

void Contact::saveSurname(std::string surname)
{
	this->surname = surname;
}

void Contact::saveNickname(std::string nickname)
{
	this->nickname = nickname;
}

void Contact::saveNumber(std::string number)
{
	this->number = number;
}
void Contact::saveSecret(std::string secret)
{
	this->secret = secret;
}

std::string Contact::getName(void)
{
	return name;
}

std::string Contact::getSurname(void)
{
	
	return surname;
}

std::string Contact::getNickname(void)
{
	return nickname;
}

std::string Contact::getNumber(void)
{
	return number;
}

std::string Contact::getSecret(void)
{
	return secret;
}
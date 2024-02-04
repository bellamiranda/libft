/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <ismirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 12:56:08 by jecarval          #+#    #+#             */
/*   Updated: 2024/02/02 21:09:24 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
	std::string	name;
	std::string	surname;
	std::string	nickname;
	std::string	number;
	std::string	secret;

	public:
		void saveName(std::string str);
		void saveSurname(std::string str);
		void saveNickname(std::string str);
		void saveNumber(std::string str);
		void saveSecret(std::string str);

		std::string	getName(void);
		std::string	getSurname(void);
		std::string	getNickname(void);
		std::string	getNumber(void);
		std::string	getSecret(void);
};

#endif
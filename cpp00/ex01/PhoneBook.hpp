/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecarval <jecarval@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 21:03:17 by jecarval          #+#    #+#             */
/*   Updated: 2023/12/30 00:32:41 by jecarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"



class PhoneBook {

	Contact contacts[8];
	static int	index;

	public:
		PhoneBook() {};
		void addContact();
		void searchContact();
};

#endif
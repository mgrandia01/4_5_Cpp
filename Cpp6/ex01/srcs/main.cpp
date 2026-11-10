/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/02/05 10:58:34 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int main()
{
	std::cout << "--------SERIALIZATION TEST--------" << std::endl;

	Data data;
	data.number = 42;
	data.text = "Hello";

	std::cout << "\n[Original Data]" << std::endl;
	std::cout << "Address:" << &data << std::endl;
	std::cout << "Number:" << data.number << std::endl;
	std::cout << "Text:" << data.text << std::endl;

	uintptr_t raw = Serializer::serialize(&data);

	std::cout <<"\n[Serialized]" << std::endl;
	std::cout << "Raw value: " << raw << std::endl;

	Data*ptr = Serializer::deserialize(raw);
	
	std::cout <<"\n[Deserialized]" << std::endl;
	std::cout << "Address:" << ptr << std::endl;
	std::cout << "Number:" << ptr->number << std::endl;
	std::cout << "Text:" << ptr->text << std::endl;


	//verify ptr
	std::cout <<"\n[Check]" << std::endl;
	if(ptr == &data)
		std::cout << "Pointers match" << std::endl;
	else
		std::cout << "Pointers do NOT match" << std::endl;

	std::cout << "\n ------END TEST -----" << std::endl;

	return (0);
}


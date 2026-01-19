/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 11:50:13 by mgrandia          #+#    #+#             */
/*   Updated: 2026/01/17 12:02:31 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int	main(int argc, char *argv [])
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << "filename s1 s2\n";
		return 1;
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (s1.empty())
	{
		std::cerr << "s1 is empty\n";
		return 1;
	}
	
	std::ifstream input(filename.c_str());
	if (!input || input.peek() == std::ifstream::traits_type::eof()) 
	{
	    std::cerr << "Error: '" << filename << "' is not a valid file\n";
	    return 1;
	}

	std::ofstream output((filename + ".replace").c_str());
	if (!output)
	{
		std::cerr << "Could not create output\n";
		return 1;
	}
	
	std::string line;
	while(std::getline(input,line))
	{
		std::string result;
		std::size_t pos = 0;
		std::size_t found;

		while((found = line.find(s1,pos)) != std::string::npos)
		{
			result.append(line.substr(pos,found-pos));
			result.append(s2);
			pos = found + s1.length();
		}
		result.append(line.substr(pos));
		output << result << '\n';
	}

	input.close();
	output.close();
	return (0);
}

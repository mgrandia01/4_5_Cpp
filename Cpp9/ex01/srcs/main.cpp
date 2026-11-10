/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 15:44:02 by mgrandia          #+#    #+#             */
/*   Updated: 2026/08/28 15:44:04 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Here is an example of standard usage:\n";
        std::cerr << "$> ./RPN \"8 9 * 9 - 9 - 9 - 4 - 1 +\"" << std::endl;
		return 1;
    }
    RPN rpn;
    try
    {
        if (rpn.validateInput(argv[1]))
           rpn.reversePolishNotation(argv[1]);
    	else
    	{
        	std::cerr << "Error: bad input. Here is an example of standard usage:\n";
        	std::cerr << "$> ./RPN \"8 9 * 9 - 9 - 9 - 4 - 1 +\"" << std::endl;
			return 1;
    	}
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << "⚠️ Caught an exception: " << e.what() << "⚠️" << RESET << '\n';
    }
        return 0;
}

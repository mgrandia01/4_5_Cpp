/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 15:42:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/08/28 15:42:42 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <stack>
#include <iostream>
#include <sstream>
#include <climits>

# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN    "\033[36m"
# define RESET   "\033[0m"

class RPN
{
private:
    std::stack<long long int> _stack;
public:
    RPN();
    ~RPN();
    RPN(const RPN &other);
	RPN &operator=(const RPN &other);

	bool	isAllowedCharacter(const std::string & input);
    bool	validateInput(const std::string & input);
    void    reversePolishNotation(const std::string & input);
};

bool	ft_isDigit(char c);
bool	ft_isSpace(char c);
bool	ft_isOperator(char c);

#endif

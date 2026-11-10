/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 12:12:49 by mgrandia          #+#    #+#             */
/*   Updated: 2026/04/18 13:15:35 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iterator>
class  Span
{
	private:
		unsigned int _N;
		std::vector<int> _numbers;

	public:
		//Constructors
		Span(unsigned int N);
		Span(const Span & other);
		
		//Overloaded Operators
		Span & operator = (const Span & other);
		
		//Destructor
		~Span();

		//Member functions
		void addNumber(int n);

		template <typename It>
		void addNumber(It begin, It end)
		{
			while (begin != end)
			{
				if(_numbers.size() >= _N)
					throw std::exception();
				_numbers.push_back(*begin);
				++begin;
			}
		}
		int shortestSpan();
		int longestSpan();
};
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 12:12:49 by mgrandia          #+#    #+#             */
/*   Updated: 2026/04/18 14:47:15 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class  MutantStack : public std::stack<T>
{
	public:
		//Constructors
		MutantStack();
		MutantStack(const MutantStack & other);
		
		//Overloaded Operators
		MutantStack & operator = (const MutantStack & other);
		
		//Destructor
		~MutantStack();

		//iterator types
		typedef typename std::stack<T>::container_type container;
		typedef typename container::iterator iterator;		
		typedef typename container::const_iterator const_iterator;		

		//iterators functions
		iterator begin();
		iterator end();
		const_iterator begin() const;
		const_iterator end() const;
};

#include "MutantStack.tpp"
#endif

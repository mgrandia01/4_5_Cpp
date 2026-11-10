/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 12:12:49 by mgrandia          #+#    #+#             */
/*   Updated: 2026/04/18 14:47:15 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************Constructors************************************** */
template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{	
	//std::cout << "MutantStack Constructor called" << std::endl;
}


template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> & other): std::stack<T>(other)
{
	//std::cout << "MutantStack Copy constructor called" << std::endl;
}

/* ************************Overloaded Operators****************************** */
template <typename T>
MutantStack<T> &MutantStack<T>:: operator = (const MutantStack &other)
{
	if (this != &other)
		std::stack<T>::operator= (other);
	return *this;
}

/* ************************Destructor***************************************** */
template <typename T>
MutantStack<T>::~MutantStack()
{
	//std::cout << "MutantStack Destructor called" << std::endl;
}

/* ************************Iterators***************************************** */

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return this->c.begin();
}


template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return this->c.end();
}


template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
	return this->c.begin();
}


template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
	return this->c.end();
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/02/05 10:58:34 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
	public:
		//Constructors
		Brain();
		Brain(const Brain & other);
		
		//Overloaded Operators
		Brain & operator = (const Brain & other);
		
		//Destructor
		virtual ~Brain();

		//Pubplic Methods

		//Getters
	  std::string getIdea(int index) const;	
		//Setters
    void setIdea(int index, const std::string& idea);  

	protected:
		std::string ideas[100];
};

#endif

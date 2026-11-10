/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/04/11 14:18:44 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <cstddef>

template<typename T_array, typename T_function>
void iter(T_array *array, size_t lenght, T_function function)
{
	for(size_t i = 0; i < lenght; i++ )
		function(array[i]);
}

template<typename T_array, typename T_function>
void iter(const T_array *array, size_t lenght, T_function function)
{
	for(size_t i = 0; i < lenght; i++ )
		function(array[i]);
}

#endif

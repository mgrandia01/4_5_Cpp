/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:00:40 by mgrandia          #+#    #+#             */
/*   Updated: 2026/04/11 14:27:44 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <algorithm>

template <typename T>

typename T::iterator easyfind(T& container, int num)
{
	typename T::iterator it;

	it = std::find(container.begin(), container.end(), num);
	if (it == container.end())
		throw std::exception();
	return it;
}

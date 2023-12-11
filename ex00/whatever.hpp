/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:55:32 by simao             #+#    #+#             */
/*   Updated: 2023/12/11 17:16:43 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void	swap(T &a, T &b)
{
	T temp;

	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T		min(T &a, T &b)
{
	if (a < b)
		return a;
	else
		return b;
}

template <typename T>
T		max(T &a, T &b)
{
	if (a > b)
		return a;
	else
		return b;
}

#endif
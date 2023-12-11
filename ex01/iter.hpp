/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:48:55 by simao             #+#    #+#             */
/*   Updated: 2023/12/11 17:57:06 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *arr, size_t length, void (*f)(T&))
{
    for (int i = 0; i < length; i++)
        f(arr[i]);
}

#endif
#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *arr, T length, void (*f)(T const &))
{
    for (int i = 0; i < len; i++)
        f(arr[i]);
}

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:39:21 by simao             #+#    #+#             */
/*   Updated: 2023/12/11 17:58:40 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void print(T &x)
{
    std::cout << x << std::endl;
    return;
}

int main(void)
{
    std::cout << "\n********** TEST 1 **********" << std::endl;
    int tab[] = {0, 1, 2, 3, 4};

    iter(tab, 5, print<int>);

    std::cout << "\n********** TEST 2 **********" << std::endl;
    std::string str[] = {"Hello", "World", "!"};

    iter(str, 3, print<std::string>);

    return (0);
}
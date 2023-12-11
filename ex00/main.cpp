/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:59:25 by simao             #+#    #+#             */
/*   Updated: 2023/12/11 17:18:32 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(int argc, char **argv)
{
    int a;
    int b;
    float c;
    float d;

    a = 2;
    b = 3;
    c = 6;
    d = 9;

    std::cout << "Valor de a antes do swap: " << a << std::endl;
    std::cout << "Valor de b antes do swap: " << b << std::endl; 

    swap(a, b);

    std::cout << "Valor de a depois do swap: " << a << std::endl;
    std::cout << "Valor de b depois do swap: " << b << std::endl;

    std::cout << "Valor maximo " << max(a, b) << std::endl;
    std::cout << "Valor minimo " << min(a, b) << std::endl;

    std::cout << "Valor de c antes do swap: " << c << std::endl;
    std::cout << "Valor de d antes do swap: " << d << std::endl; 

    swap(a, b);

    std::cout << "Valor de c depois do swap: " << c << std::endl;
    std::cout << "Valor de d depois do swap: " << d << std::endl;

    std::cout << "Valor maximo " << max(c, d) << std::endl;
    std::cout << "Valor minimo " << min(c, d) << std::endl;
}

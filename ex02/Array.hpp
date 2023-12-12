/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 00:52:19 by simao             #+#    #+#             */
/*   Updated: 2023/12/12 13:34:26 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Array_HPP
# define Array_HPP

#include <iostream>

template <typename T>
class Array 
{
	public:
		/* Default constructor: creates an empty array */
		Array() : data(nullptr), arraySize(0) 
		{
			std::cout << "Default constructor called" << std::endl;
		}

		/* Parameterized constructor: creates an array of n elements initialized by default */ 
		Array(unsigned int n) : arraySize(n) 
		{
			std::cout << "Parameterized constructor called" << std::endl;
			if (n > 0)
				data = new T[n]();
			else
				data = nullptr;
		}

		/* Copy constructor */
		Array(const Array& other) : arraySize(other.arraySize)
		{
			std::cout << "Copy constructor called" << std::endl;
			if (arraySize > 0) 
			{
				data = new T[arraySize];
				for (unsigned int i = 0; i < arraySize; ++i) {
					data[i] = other.data[i];
				}
			} 
			else
				data = nullptr;
		}

		/* Assignment operator */
		Array& operator=(const Array& other) {
			std::cout << "Assignment operator called" << std::endl;
			if (this != &other)
			{
				delete[] data;
				arraySize = other.arraySize;
				if (arraySize > 0) 
				{
					data = new T[arraySize];
					for (unsigned int i = 0; i < arraySize; ++i) 
					{
						data[i] = other.data[i];
					}
				} 
				else
					data = nullptr;
			}
			return *this;
		}

		/* Destructor */
		~Array()
		{
			delete[] data;
		}

		/* Subscript operator: provides access to elements */
		T& operator[](unsigned int index)
		{
			if (index >= arraySize) {
				throw std::out_of_range("Index out of bounds");
			}
			return data[index];
		}

		/* Member function size(): returns the number of elements in the array */
		unsigned int size() const {
			return arraySize;
		}

	private:
		T *data;             // Pointer to the dynamic array
		unsigned int arraySize; // Number of elements in the array
};

#endif
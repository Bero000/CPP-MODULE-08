#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
typename T::iterator easyfind(T& myArray, int num)
{
    typename T::iterator it = std::find(myArray.begin(), myArray.end(), num);
    if (it != myArray.end())
        return it;
    throw std::runtime_error("Error: Can't found!");
}

#endif
#ifndef MUTANT_HPP
# define MUTANT_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
    public:
        MutantStack(){};
        ~MutantStack(){};
        MutantStack(const MutantStack& cpy):std::stack<T>(cpy){};
        MutantStack& operator= (const MutantStack& value)
        {
            if (this != &value)
                this->c = value.c;
            return *this;
        };

    typedef typename std::deque<T>::iterator iterator;
    typedef typename std::deque<T>::const_iterator const_iterator;

    typedef typename std::deque<T>::reverse_iterator reverse_iterator;
    typedef typename std::deque<T>::const_reverse_iterator const_reverse_iterator;

    typename std::deque<T>::iterator begin() 
    {
        return std::stack<T>::c.begin();
    }

    typename std::deque<T>::iterator end() 
    {
        return std::stack<T>::c.end();
    }

    typename std::deque<T>::const_iterator begin() const 
    {
        return std::stack<T>::c.begin();
    }

    typename std::deque<T>::const_iterator end() const 
    {
        return std::stack<T>::c.end();
    }

    typename std::deque<T>::reverse_iterator rbegin()
    {
        return std::stack<T>::c.rbegin();
    }

    typename std::deque<T>::reverse_iterator rend()
    {
        return std::stack<T>::c.rend();
    }

    typename std::deque<T>::const_reverse_iterator rbegin() const
    {
        return std::stack<T>::c.rbegin();
    }

    typename std::deque<T>::const_reverse_iterator rend() const
    {
        return std::stack<T>::c.rend();
    }
};

#endif
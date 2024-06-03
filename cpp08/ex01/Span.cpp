#include "Span.hpp"

Span::Span(): N(0)
{}
Span::~Span()
{}
Span::Span(int n): N(n)
{}
Span::Span(const Span& cpy)
{
    *this = cpy;
}
Span& Span::operator= (const Span& value)
{
    if (this != &value)
        this->N = value.N;
    return *this;
}

void Span::addNumber(int nNumb)
{
    if (vec.size() < static_cast<unsigned int>(N))
        vec.push_back(nNumb);
}

template <typename T>
void Span::bubbleSort(T& ab) 
{
    bool is_swap = true;

    while (is_swap) 
    {
        is_swap = false;
        for (typename T::iterator it = ab.begin(); it != ab.end() - 1; ++it) 
        {
            if (*it > *(it + 1)) 
            {
                std::swap(*it, *(it + 1));
                is_swap = true;
            }
        }
    }
}

int Span::shortestSpan()
{
    unsigned int dif = 0;
    if (N <= 1)
        throw noValueException();
    bubbleSort(vec);
    dif = *(vec.begin() + 1) -  *vec.begin();
    for (std::vector<unsigned int>::iterator it = vec.begin(); it != vec.end(); it++)
    {
        if (dif > *it - *(it + 1))
            dif = *it - *(it + 1);
    }
    return (dif);
    
}

int Span::longestSpan()
{
    if (N <= 1)
        throw noValueException();
    bubbleSort(vec);
    return (*(vec.end() - 1) - *vec.begin());
    
}

const char* Span::noValueException::what() const throw()
{
    return ("Error: No value exception!");
}
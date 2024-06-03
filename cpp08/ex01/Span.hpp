#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>



class Span
{
    private:
        unsigned int N;
        std::vector<unsigned int> vec;
    public:
        Span();
        ~Span();
        Span(int n);
        Span (const Span& cpy);
        Span& operator= (const Span& value);

        void addNumber(int nNumb);

        template <typename T>
        void bubbleSort(T& ab);
        int shortestSpan();
        int longestSpan();

        class noValueException: public std::exception
        {
            const char* what() const throw();
        };
};

#endif
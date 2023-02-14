#include "Span.hpp"
#include <iostream>
#include <ostream>
#include <climits>
#include <stdlib.h>

Span :: Span()
{
    this->N = 0;
    this->number_add = 0;
}

Span :: ~Span()
{
}

Span :: Span(unsigned int n)
{
    this->N = n;
    this->number_add = 0;

}

Span :: Span(const Span &src)
{
    this->N = src.N;
    this->number_add = src.number_add;
    this->List = src.List;
}

Span& Span :: operator=(const Span &src)
{
    if (this == &src)
        return (*this);
    this->N = src.N;
    this->number_add = src.number_add;
    this->List = src.List;
    return (*this);
}


void Span :: addNumber(int add)
{
    if (this->number_add == this->N)
        throw OutOfBoundsException();
    this->List.push_back(add);
    this->number_add++;
}



void Span :: affiche()
{
    for(std :: list<int>::iterator it = this->List.begin(); it != this->List.end(); it++){
		std :: cout << *it << std :: endl;}
}

int Span :: min()
{
    int i = INT_MAX;
    for(std :: list<int>::iterator it = this->List.begin(); it != this->List.end(); it++)
    {
		if (i > *it)
            i = *it;
    }
    return (i);

}

int Span :: max()
{
    int i = 0;
    for(std :: list<int>::iterator it = this->List.begin(); it != this->List.end(); it++)
    {
		if (i < *it)
            i = *it;
    }
    return (i);

}

int Span :: longestSpan()
{
    return (max()-min());
}

int Span :: shortestSpan()
{
    int diff = max() - min();
    for(std :: list<int>::iterator it = this->List.begin(); it != this->List.end(); it++)
    {
        for(std :: list<int>::iterator val = this->List.begin(); val != this->List.end(); val++)
        {
            if (it == val)
                continue;
            else
            {
                if (diff > abs(*it - *val))
                    diff = abs(*it - *val);
            }
        }
    }

    return (diff);   
}
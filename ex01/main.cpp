#include "Span.hpp"
#include <iostream>
#include <ostream>
#include <iostream>
#include <list>
#include <exception>

int main()
{
    try 
    {   
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

        Span list = Span(20);
        list.addNumber(19);
        list.addNumber(77);
        list.addNumber(40);
        list.addNumber(6);
        list.addNumber(75);
        list.addNumber(98);
        list.addNumber(45);
        list.addNumber(65);
        list.addNumber(29);
        list.addNumber(76);
        list.addNumber(33);
        std::cout << list.shortestSpan() << std::endl;
        std::cout << list.longestSpan() << std::endl;

        Span rh = Span(6);
        rh = sp;
        std::cout << rh.shortestSpan() << std::endl;
        std::cout << rh.longestSpan() << std::endl;

    }
    catch(std :: exception &e)
    {
        std :: cout << e.what() << std :: endl;
    }


    return 0;
}
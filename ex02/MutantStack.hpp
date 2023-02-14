#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>
#include <iterator>
template <typename T>
class MutantStack: public std::stack<T>
{
    public:
        typedef typename std::stack<T>::container_type::iterator	iterator;
        
		MutantStack(void): std::stack<T>()
        { 
            std::cout << "Default Constructor called" << std::endl;
        };

		MutantStack(MutantStack	&src): std::stack<T>(src)
        {
            std::cout << "Copy Constructor called" << std::endl; 
        };

		~MutantStack(void)
        { 
            std::cout << "Default Destructor called" << std::endl; 
        };

		MutantStack	&operator=(MutantStack	&rhs) 
        { 
            *this =  rhs; 
        };
		iterator	begin(void) 
        { 
            return std::stack<T>::c.begin(); 
        };
		iterator	end(void) 
        { 
            return std::stack<T>::c.end(); 
        };

};

#endif 
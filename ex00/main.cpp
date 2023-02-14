#include <ostream>
#include <iostream>
#include <algorithm> 
#include <vector>
#include "easyfind.hpp"


int main()
{
    std::vector<int> v1;
    v1.push_back(42);
    v1.push_back(2);
    v1.push_back(34);
    v1.push_back(72);
    std::vector<int>::iterator iter;
    try
    {
        iter = easyfind(v1, 2);
        std::cout << *iter << std::endl;
    }
    catch(BadArgumentException & ex)
    {
        std :: cout << ex.what() << std :: endl;
    }
    return 0;
}
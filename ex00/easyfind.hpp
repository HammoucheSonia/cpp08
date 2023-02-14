#include <ostream>
#include <iostream>
#include <algorithm> 
#include <vector>

class BadArgumentException : public std::exception
{
	public:
		const char * what() const throw()
		{
			return "Not found element in container";
		}
};

template <typename T>
typename T :: iterator easyfind(T &container, int n)
{
    typename T :: iterator result = std :: find(container.begin(), container.end(), n);
    if (result == container.end())
        throw BadArgumentException();
    return (result);
}
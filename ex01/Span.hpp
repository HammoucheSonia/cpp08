#include <list>
#include <cstddef>
class Span 
{
    private:
        unsigned int N;
        std::list<int> List;
        unsigned int number_add;
    public:
        Span();
        Span(unsigned int n);
        ~Span();
        Span(const Span &src);
        Span &operator=(const Span &src);
        void addNumber(int add);
        void affiche();
        int min();
        int max();
        int longestSpan();
        int shortestSpan();
        class	OutOfBoundsException	:	public std::exception
	    {
	    public:
		    virtual char const*	what() const throw()
		    { return "le nombre N a ete deja atteint"; }
	    };
};
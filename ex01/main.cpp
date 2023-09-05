#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(-6);
	sp.addNumber(0);
	sp.addNumber(20);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	std::cout << "************************************" << std::endl;

	std::vector<int> source;
	source.push_back(1);
	source.push_back(2);
	source.push_back(3);
	// we have one source and two types of targets with the same values
    std::vector<int> target;
	target.push_back(4);
	target.push_back(5);
	target.push_back(6);
	Span targetSpan = Span(8); // this is our class
	targetSpan.addNumber(4);
	targetSpan.addNumber(5);
	targetSpan.addNumber(6);
    
    target.insert(target.end(), source.begin(), source.end());
    for (std::vector<int>::iterator it = target.begin(); it != target.end(); ++it) {
        std::cout << *it << " ";
    }
	std::cout << std::endl;
	targetSpan.addNumber(source.begin(), source.end());
	std::cout << targetSpan << std::endl;
	
	Span test = Span(4242424); // testing with big values
	for (int i = 0; i < 4242424; i++)
		test.addNumber(i);
	return 0;
}
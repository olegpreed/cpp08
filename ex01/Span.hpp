#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
private:
	unsigned int _size;
	std::vector<int> _numbers;
	Span();
public:
	Span(unsigned int N);
	Span(Span const &src);
	Span &operator=(Span const &src);
	void addNumber(int n);
	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	unsigned int shortestSpan();
	unsigned int longestSpan();
	std::vector<int> getNumbers() const;
	~Span();
};

std::ostream &operator<<(std::ostream &o, Span const &src);

#endif
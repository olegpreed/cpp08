#include "Span.hpp"

Span::Span(){};

Span::~Span(){};

Span::Span(unsigned int N): _size(N){};

Span::Span(Span const &src){
	*this = src;
}

Span &Span::operator=(Span const &src){
	if (this != &src)
	{
		_size = src._size;
		_numbers = src._numbers;
	}
	return *this;
}

void Span::addNumber(int n)
{
	if (_numbers.size() == _size)
		throw std::runtime_error("Span is full");
	_numbers.push_back(n);
}

unsigned int Span::longestSpan()
{
	if (_numbers.size() < 2) 
		throw std::runtime_error("There should be more than one number");
	return *std::max_element(_numbers.begin(), _numbers.end())
			- *std::min_element(_numbers.begin(), _numbers.end());
}

unsigned int Span::shortestSpan()
{
	if (_numbers.size() < 2)
		throw std::runtime_error("There should be more than one number");
	std::vector<int> tmp = _numbers;
	std::sort(tmp.begin(), tmp.end());
	int shortest = tmp[1] - tmp[0];
	for (std::vector<int>::iterator it = tmp.begin() + 1; it != tmp.end(); it++)
	{
		shortest = shortest < (*it - *(it - 1)) ? shortest : (*it - *(it - 1));
	}
	return shortest;
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (begin == end || end < begin)
		return;
	if (_numbers.size() + std::distance(begin, end) > _size)
		throw std::runtime_error("Span does not have the capacity for that");
	for (std::vector<int>::iterator it = begin; it != end; it++)
		addNumber(*it);
}

std::vector<int> Span::getNumbers() const
{
	return _numbers;
}

std::ostream &operator<<(std::ostream &os, Span const &src)
{
	const std::vector<int> &numbers = src.getNumbers();
	for (std::vector<int>::const_iterator it = numbers.begin(); it != numbers.end(); it++)
		os << *it << " ";
	return os;
}

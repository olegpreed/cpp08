#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T, class Container = std::deque<T>>
class MutantStack : public std::stack<T, Container>
{
private:
public:
	MutantStack() : std::stack<T, Container>(){};
	~MutantStack(){};
	MutantStack(const MutantStack<T> &src) : std::stack<T, Container>(src)
	{
		*this = src;
	};
	MutantStack<T> &operator=(const MutantStack<T> &src)
	{
		std::stack<T, Container>::operator=(src);
		return *this;
	};
	typedef typename Container::iterator iterator;
	iterator begin()
	{
		return this->c.begin();
	};
	iterator end()
	{
		return this->c.end();
	};
};

#endif
//
// Created by Debby Willette on 9/8/21.
//

#ifndef CPP06_MUTANTSTACK_HPP
#define CPP06_MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container >
{
public:

	typedef typename Container::iterator iterator;
	typedef typename Container::const_iterator const_iterator;
	typedef typename Container::reverse_iterator reverse_iterator;
	typedef typename Container::const_reverse_iterator const_reverse_iterator;

	MutantStack() : std::stack<T>() {}
	MutantStack(const MutantStack<T> &src) : std::stack<T>(src) {}
	virtual ~MutantStack() {};

	MutantStack &operator=(const MutantStack<T> & src)
	{
		if (this == &src)
			return (*this);

		this->c.operator=(src);
		return (*this);
	}

	typename MutantStack<T>::iterator begin()
	{
		return (this->c.begin());
	}
	typename MutantStack<T>::const_iterator begin() const
	{
		return (this->c.begin());
	}
	typename MutantStack<T>::reverse_iterator rbegin()
	{
		return (this->c.rbegin());
	}
	typename MutantStack<T>::const_reverse_iterator rbegin() const
	{
		return (this->c.rbegin());
	}

	typename MutantStack<T>::iterator end()
	{
		return (this->c.end());
	}
	typename MutantStack<T>::const_iterator end() const
	{
		return (this->c.end());
	}
	typename MutantStack<T>::reverse_iterator rend()
	{
		return (this->c.rend());
	}
	typename MutantStack<T>::const_reverse_iterator rend() const
	{
		return (this->c.rend());
	}
};

#endif //CPP06_MUTANTSTACK_HPP

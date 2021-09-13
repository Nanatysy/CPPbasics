//
// Created by Debby Willette on 9/8/21.
//

#ifndef CPP06_MUTANTSTACK_HPP
#define CPP06_MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	class iterator
	{
	private:
		T *_ptr;
	public:
		iterator() : _ptr(nullptr) {}
		iterator(T *data) : _ptr(data) {}
		iterator(const iterator & src)
		{
			*this = src;
		}
		virtual ~iterator() {}

		iterator &operator=(const iterator & src)
		{
			if (this == &src)
				return (*this);
			_ptr = src._ptr;
			return (*this);
		}
		T &operator*() const
		{
			return (*_ptr);
		}
	};

	MutantStack() : std::stack<T>() {}
	MutantStack(const MutantStack<T> &src) : std::stack<T>(src) {}
	virtual ~MutantStack() {};

	MutantStack<T> &operator=(const MutantStack<T> & src)
	{
		if (this == &src)
			return (*this);
		// copy
		return (*this);
	}

	MutantStack<T>::iterator begin()
	{
		return (MutantStack<T>::iterator(&this->top() - this->size() + 1));
	}
	MutantStack<T>::iterator end()
	{
		return (MutantStack<T>::iterator(&this->top() + 1));
	}

};

#endif //CPP06_MUTANTSTACK_HPP

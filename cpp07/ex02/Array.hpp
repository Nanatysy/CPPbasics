//
// Created by Debby Willette on 9/7/21.
//

#ifndef CPP06_ARRAY_HPP
#define CPP06_ARRAY_HPP

#include <iostream>

template <class T>
class Array
{
private:
	T* _array;
	unsigned int _len;

public:

	class IndexOutOfLimit : public std::exception
	{
	public:
		virtual const char * what() const throw()
		{
			return ("Element is out of the limits");
		}
	};

	Array()
	{
		_array = new T[0];
		_len = 0;
	}

	Array(unsigned int n) : _len(n)
	{
			_array = new T[n];
		for (unsigned int i = 0; i < n; i++)
			_array[i] = T();
	}

	Array(const Array<T> & src)
	{
		_len = src.size();
		_array = new T[_len];
		for (unsigned int i = 0; i < _len; i++)
			_array[i] = src._array[i];
	}

	~Array()
	{
		delete [] _array;
	}

	Array<T> & operator=(const Array<T> & src)
	{
		if (this == &src)
			return (*this);

		delete [] _array;
		_len = src.size();
		_array = new T[_len];
		for (unsigned int i = 0; i < _len; i++)
			_array[i] = src._array[i];
		return (*this);
	}

	T& operator[](long int index)
	{
		if (index < 0)
			throw Array<T>::IndexOutOfLimit();
		index = static_cast<unsigned int>(index);
		if (index >= _len)
			throw Array<T>::IndexOutOfLimit();
		return (_array[index]);
	}

	unsigned int size(void) const
	{
		return (_len);
	}
};

#endif //CPP06_ARRAY_HPP

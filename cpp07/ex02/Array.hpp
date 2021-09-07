//
// Created by Debby Willette on 9/7/21.
//

#ifndef CPP06_ARRAY_HPP
#define CPP06_ARRAY_HPP

template <typename T>
class Array
{
private:
	T *_array;

public:
	Array();
	Array(unsigned int n);
	~Array();
};

#endif //CPP06_ARRAY_HPP

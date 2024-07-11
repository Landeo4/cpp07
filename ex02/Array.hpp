#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstdlib>

template< typename T>
class Array
{
	public:
	Array();
	Array(const Array & copy);
	Array &operator=(const Array & copy);
	~Array();

	Array(unsigned int n);
	Array &operator[](int idx);
	Array &operator!=(const Array & lhs);
	int size();
	private:
	T _ar;
};

#endif
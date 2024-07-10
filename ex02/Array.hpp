#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
	public:
	Array();
	Array(unsigned int n);
	Array(const Array & copy);
	Array &operator(const Array & copy)
	~Array();

	private:
	Array _ar;
};

#endif
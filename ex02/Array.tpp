#include "Array.hpp"

Array::Array()
{
	Array ar = new Array;
}

Array::~Array()
{

}

Array::Array(unsigned int n)
{
	Array _ar[n] = new Array;
}

Array::Array(const Array & copy)
{
	*this = copy;
}

Array Array::&operator(const Array & copy)
{
	this->_ar = copy->_ar;
	return this;
}

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstdlib>
#include <exception>

template< typename T>
class Array
{
	public:
	Array();
	Array(const Array & copy);
	Array &operator=(const Array & copy);
	~Array();

	class IdxTooHigh : public std::exception
	{
		public:
		const char * what() const throw()
		{
			return ("the idx is too high");
		}
	};

	Array(unsigned int n);
	T &operator[](int idx);
	Array &operator!=(const Array & lhs);
	int size();
	private:
	T 		*_ar;
	size_t 	_size;
};

#include "Array.hpp"

template<typename T>
Array<T>::Array()
{
	T *_ar = new T;
}

template<typename T>
Array<T>::~Array()
{
	delete _ar;
}

template<typename T>
Array<T>::Array(unsigned int n) : _ar(new T[n]()) , _size(n)
{

}

template<typename T>
Array<T>::Array(const Array & copy)
{
	*this = copy;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array & copy)
{
	if (&copy != this)
	{
		this->_ar = copy._ar;
		this->_size = copy._size;
	}
	return *this;
}

template<typename T>
int Array<T>::size()
{
	for (int i = 0; this->_ar[i]; i++)
	_size = i;
	return _size;
}

template<typename T>
T &Array<T>::operator[](int idx)
{
	if (idx >= size())
		throw IdxTooHigh();
	return _ar[idx];
}
// l'element doit return un T car c'est le type du tableau

template<typename T>
Array<T> &Array<T>::operator!=(const Array & lhs)
{
	return (this->_ar != lhs._ar);
}

#endif
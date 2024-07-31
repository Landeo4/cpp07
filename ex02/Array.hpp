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
	T _ar;
};

#endif
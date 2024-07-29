#include "Array.hpp"

template<typename T>
Array<T>::Array()
{
	T _ar = new T;
}

template<typename T>
Array<T>::~Array()
{

}

template<typename T>
Array<T>::Array(unsigned int n)
{
	T _ar[n] = new T;
}

template<typename T>
Array<T>::Array(const Array & copy)
{
	*this = copy;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array & copy)
{
	this->_ar = copy->_ar;
	return this;
}

template<typename T>
int Array<T>::size()
{
	for (int i = 0; this->_ar[i]; i++)
	return (i);
}

template<typename T>
Array<T> &Array<T>::operator[](int idx)
{
	// if (idx > size())
		// throw
	return (this->_ar[idx]);
}
// l'element doit return un T car c'est le type du tableau

template<typename T>
Array<T> &Array<T>::operator!=(const Array & lhs)
{
	return (this->_ar != lhs._ar);
}

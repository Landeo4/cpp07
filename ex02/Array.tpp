// #include <Array.hpp>

// template<typename T>
// Array<T>::Array() : _ar(new T[0]()), _size(0)
// {

// }

// template<typename T>
// Array<T>::~Array()
// {
// 	delete [] _ar;
// }

// template<typename T>
// Array<T>::Array(unsigned int n) : _ar(new T[n]()) , _size(n)
// {

// }

// template<typename T>
// Array<T>::Array(const Array & copy) : _ar(0), _size(0)
// {
// 	*this = copy;
// }

// template<typename T>
// Array<T> &Array<T>::operator=(const Array & copy)
// {
// 	if (&copy != this)
// 	{
// 		delete [] _ar;
// 		_size = copy._size;
// 		_ar = new T[_size];
// 		for (int i = 0; i < _size; i++)
// 			_ar[i] = copy._ar[i];
// 	}
// 	return *this;
// }

// template<typename T>
// int Array<T>::size()
// {
// 	for (int i = 0; this->_ar[i]; i++)
// 	_size = i;
// 	return _size;
// }

// template<typename T>
// T &Array<T>::operator[](int idx)
// {
// 	if (idx >= this->_size || idx < 0)
// 		throw IdxTooHigh();
// 	return _ar[idx];
// }

// template<typename T>
// Array<T> &Array<T>::operator!=(const Array & lhs)
// {
// 	if (_size != lhs)
// 		return 1;
// 	for (unsigned int i = 0; i < _size; i++)
// 		if (_ar[i] != lhs._ar[i])
// 			return 1;
// 	return 0;
// }
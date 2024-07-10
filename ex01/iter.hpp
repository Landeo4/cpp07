#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <cstddef>

template <typename T, typename F>
void iter(T *ar, size_t len, F fnct)
{
	size_t i = 0;
	while (i < len)
	{
		fnct(ar[i]);
		i++;
	}
}

#endif
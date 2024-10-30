#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <cstddef>
#include <string>

template <typename T, typename F, typename P>
void iter(T *ar, size_t len, F fnct(P))
{
	size_t i = 0;
	while (i < len)
	{
		fnct(ar[i]);
		i++;
	}
}

#endif
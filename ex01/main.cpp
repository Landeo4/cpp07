#include "iter.hpp"

void print(std::string s)
{
	std::cout << s << std::endl;
}

int main()
{
	std::string str = "coucou";
	int len = str.size();
	iter(str, len, print);
}

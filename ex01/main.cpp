#include "iter.hpp"

void print(std::string s)
{
	std::cout << s << std::endl;
}

void print_int(int nb)
{
	std::cout << nb << " " << std::endl;
}

int main()
{
	std::string str[] = {"coucou"};
	int len = sizeof(str) / sizeof(str[0]);
	iter(str, len, print);

}

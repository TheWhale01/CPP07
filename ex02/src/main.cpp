#include "Array.hpp"

int main(void)
{
	Array<int> tab(4);
	// Array<std::string> array(4);

	std::cout << tab << std::endl;
	// std::cout << array << std::endl;
	for (size_t i = 0; i < 4; i++)
		tab[i] = i;
	// for (size_t i = 0; i < 4; i++)
		// array[i] = "Bonsoir";
	std::cout << tab << std::endl;
	// std::cout << array << std::endl;
	return (0);
}
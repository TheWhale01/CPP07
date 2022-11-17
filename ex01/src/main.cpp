#include "Iter.hpp"

void addOne(int *nb)
{
	(*nb)++;
}

void print_list(int *list, size_t length)
{
	for (size_t i = 0; i < length; i++)
		std::cout << list[i] << " ";
	std::cout << std::endl;
}

int main(void)
{
	size_t length = 4;
	int *array = new int[length];
	for (size_t i = 0; i < length; i++)
		array[i] = i;

	std::cout << "base list: ";
	print_list(array, length);
	
	::iter<int *, size_t, void (*)(int *)>(array, length, &addOne);
	std::cout << "function modified list: ";
	print_list(array, length);

	::iter<int *, size_t, void (*)(int *)>(array, length, &add_one);
	std::cout << "template modified list: ";
	print_list(array, length);
	delete [] array;
	return (0);
}
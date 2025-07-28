#include "iter.hpp"
#include <iostream>

template<typename T>
void printElement(T const &x)
{
	std::cout << x << " ";
}

template<typename T>
void incrementElement(T &x)
{
	++x;
}

int main( void ) 
{
	{

		int arr[] = {1, 2, 3, 4, 5};
		size_t len = sizeof(arr) / sizeof(int);
		
		std::cout << "Original int array: ";
		iter(arr, len, printElement);
		std::cout << "\n";
		
		iter(arr, len, incrementElement);
		
		std::cout << "After increment: ";
		iter(arr, len, printElement);
		std::cout << "\n";
	}

	{
		std::string arr[] = {"Hello", "World", "!"};
		size_t len = sizeof(arr) / sizeof(std::string);
		std::cout << "String array: ";
		iter(arr, len, printElement);
		std::cout << "\n";
	}

	{
		const char arr[] = {'A', 'B', 'C'};
		size_t len = sizeof(arr) / sizeof(char);

		std::cout << "Const char array: ";
		iter(arr, len, printElement);
		
		std::cout << "\n";
	}
	return 0;
}
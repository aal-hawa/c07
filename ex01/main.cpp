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
		iter(arr, len, printElement<const int>);
		std::cout << "\n";
		
		iter(arr, len, incrementElement<int>);
		
		std::cout << "After increment: ";
		iter(arr, len, printElement<const int>);
		std::cout << "\n";
	}

	{
		std::string arr[] = {"Hello", "World", "!"};
		size_t len = sizeof(arr) / sizeof(std::string);
		// size_t len = arr->size();
		// arr->size();
		std::cout << "String array: ";
		iter(arr, len, printElement<const std::string>);
		std::cout << "\n";
	}

	{
		const char arr[] = {'A', 'B', 'C'};
		size_t len = sizeof(arr) / sizeof(char);
		
		std::cout << "Const char array: ";
		iter(arr, len, printElement<const char>);
		
		std::cout << "\n";
	}
	std::cout << "\n";

	return 0;
}
#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

// template<typename T, typename F>
// // template<typename T>
// void iter(T const *array, size_t length, F func)
// {
// 	for (size_t i = 0; i < length; ++i)
// 		func(array[i]);
// }
// template<typename T>
template<typename T, typename F>
void iter(T *array, const size_t length, F func)
{
	for (size_t i = 0; i < length; ++i)
		func(array[i]);
}

#endif
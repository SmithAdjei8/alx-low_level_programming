#include "function_pointers.h"

/**
 * array_iterator - runs a function given as a
 * param on each element of an array.
 * @array: input integer array.
 * @size: array size.
 * @action: pointer to the function.
 *
 * Return: no return.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}

#include "main.h"
#include <stdlib.h>

/**
 * array_iterator - prints a name.
 * @array: - array
 * @size: - size of string
 * @action: - function compare
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

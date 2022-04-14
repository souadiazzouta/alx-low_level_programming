#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array to search in it.
 * @size: size of array.
 * @cmp: function used to compare.
 *
 * Return: the first element for which
 * cmp function does not return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, c;


	if (size <= 0 || array != NULL || cmp != NULL)
	{
		return (-1);
	}

	while (cmp(array[i]))
	{
		i++;
	}

	return (i);
}
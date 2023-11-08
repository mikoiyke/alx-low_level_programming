#include "function_pointers.h"
#include <stdio.h>
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (int i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}

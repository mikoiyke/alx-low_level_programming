#include "search_algos.h"

/**
 ** linear_search - searches for a value in an array using Linear
 ** @array: The array to search in.
 ** @size: The size of array.
 ** @value: The value to search for.
 **
 ** Return: On success the index of the value searched for.
 **         Otherwise -1.
 **/
int linear_search(int *array, size_t size, int value)
{
	size_t inx;

	if (!array)
		return (-1);

	for (inx = 0; inx < size; inx++)
	{
		printf("Value checked array[%ld] = [%d]\n", inx, array[inx]);

		if (array[inx] == value)
			return (inx);
	}

	return (-1);
}

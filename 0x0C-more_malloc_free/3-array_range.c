#include "main.h"
#include <stdlib.h>

/**
 * array_range - create array of integers
 * @min:int at minimum
 * @max:int at maximum
 * Return: int value
 */

int *array_range(int min, int max)
{
	int *ar;
	int i, j, total;

	if (min > max)
	return (NULL);

	total = max - min;

	ar = malloc((total + 1) * sizeof(int));

	if (ar == NULL)
	return (NULL);

	for (i = 0, j = min; j <= max; j++, i++)
	ar[i] = j;

	return (ar);
}

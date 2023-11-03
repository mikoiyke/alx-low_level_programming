#include "main.h"
#include <stdlib.h>

/**
  * array_range - creates an array of integers.
  * int min: minimum integer
  * int max: maximum integer
  * Return: Success int
  */
int *array_range(int min, int max)
{
	int *pr;
	int i, total;

	if (min > max)
		return (NULL);

	total = max - min;
	pr = malloc((total + 1) * sizeof(int));

	if (pr == NULL)
		return (NULL);

	for (i = 0; min <= max; min++, i++)
		pr[i] = min;
	return (pr);
}

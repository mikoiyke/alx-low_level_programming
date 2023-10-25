#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - main function
  *
  * @size: function parameter
  *
  * @a: function parameter
  *
  * Return: Always 0.
  */

void print_diagsums(int *a, int size)
{
	int count1;
	int count2;
	int z;

	count1 = 0;
	count2 = 0;

	for (z = 0; z < size; z++)
	{
	count1 = count1 + a[z * size + z];
	}
	for (z = size - 1; z >= 0; z--)
	{
	count2 += a[z * size + (size - z - 1)];
	}
	printf("%d, %d\n", count1, count2);
}

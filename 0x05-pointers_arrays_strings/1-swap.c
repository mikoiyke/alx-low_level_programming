#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: arg a
 * @b: arg b
 * Return: swap_int
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

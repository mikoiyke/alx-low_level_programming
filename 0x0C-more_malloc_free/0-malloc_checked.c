#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - allocates memory using malloc and exit if failed
 * @b: int input
 * Return: success 0
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

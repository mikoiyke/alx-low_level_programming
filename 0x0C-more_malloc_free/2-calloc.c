#include "main.h"
#include <stdio.h>

/**
 *_calloc - allocate memory with calloc
 *@nmemb:unsigned int 1
 *@size:unsigned int 2
 *Return: void (0)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *r;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	r = malloc(nmemb * size);

	if (r == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < (nmemb * size); x++)
		r[x] = 0;

	return (r);
}

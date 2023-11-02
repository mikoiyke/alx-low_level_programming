#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **mee;
	int z, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	mee = malloc(sizeof(int *) * height);
	if (mee == NULL)
		return (NULL);
	for (z = 0; z < height; x++)
	{
		mee[z] = malloc(sizeof(int) * width);
		if (mee[z] == NULL)
		{
			for (; z >= 0; z--)
				free(mee[z]);
			free(mee);
			return (NULL);
		}
	}
	for (z = 0; z < height; z++)
	{
		for (y = 0; y < width; y++)
			mee[z][y] = 0;
	}
	return (mee);
}

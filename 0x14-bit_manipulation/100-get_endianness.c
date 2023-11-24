#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int y;
	char *y;

	y = 1;
	z = (char *)&y;
	return (*z);
}

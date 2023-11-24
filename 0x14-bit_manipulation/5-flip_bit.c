#include "main.h"

/**
 * flip_bits - counts the exact  number of bits to change to
 * get from one number to another.
 * @n: first number
 * @m: second number
 * Return: number of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, bitcounter = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> a;
		if (current & 1)
			bitcounter++;
	}

	return (bitcounter);
}

#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number of unsigned int
 * Return: binary number
 *
 */

void print_binary(unsigned long int n)
{
	int shift, leadingZeros;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	shift = sizeof(unsigned long int) * 8 - 1;
	leadingZeros = 1;

	while (shift >= 0)
	{
		if ((n >> shift) & 1)
		{
			putchar('1');
			leadingZeros = 0;
		}
		else if (!leadingZeros)
		{
			putchar('0');
		}

		shift--;
	}
}

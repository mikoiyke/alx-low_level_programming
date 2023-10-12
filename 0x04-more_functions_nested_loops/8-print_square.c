#include "main.h"

/**
 * print_square - prints a square using # character
 * @size: size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int length, breadth;

		for (length = 0; length < size; length++)
		{
			for (breadth = 0; breadth < size; breadth++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

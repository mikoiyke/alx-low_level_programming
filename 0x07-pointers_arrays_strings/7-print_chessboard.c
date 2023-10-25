#include "main.h"

/**
  * print_chessboard - main function
  *
  * @a: the declared function parameter
  * Return: Always 0.
  */
void print_chessboard(char (*a)[8])
{
	int m;
	int r;

	for (m = 0; m < 8; m++)
	{
	for (n = 0; n < 8; n++)
	_putchar(a[m][n]);
	_putchar('\n');
	}
}

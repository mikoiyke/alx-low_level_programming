#include <stdio.h>
/**
  * main - Entry point
  * Return: Success (0)
 */
int main(void)
{
	int n = 0, y = 1;

	for (n = 0; n < 9; n++)
	{
		for (y = n + 1; y < 10; y++)
		{
		putchar((n % 10) + '0');
		putchar((y % 10) + '0');

		if (n == 8 && y == 9)
			continue;

		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

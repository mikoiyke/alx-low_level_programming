#include <stdio.h>
/**
 * main - Entry point
 * Return:  prints all possible combinations of single-digit numbers
 */
int main(void)
{
	int n = 0;

	for (n = 0; n <= 20; n++)
	{
		putchar(n + '0');
		if (n == 9)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

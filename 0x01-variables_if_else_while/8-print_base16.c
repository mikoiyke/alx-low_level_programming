#include <stdio.h>
/**
 * main - Entry point
 * Return: Success (0)
 */
int main(void)
{
	int m = 0;
	int n = 'a';

	for (m = 0; m < 10; m++)
	{
		putchar(m);
	}
	for (n = 'a'; n < 'g'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

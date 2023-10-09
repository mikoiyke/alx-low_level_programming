#include <stdio.h>
/**
  * main - Entry point
  * Return: success (0)
  */
int main(void)
{
	int c = 'z';

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

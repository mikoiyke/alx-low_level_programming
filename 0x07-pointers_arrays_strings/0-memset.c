#include "main.h"
/**
  * _memset - fills memory with a constant byte
  * @s: the memory area pointed
  * @b: the change letter
  * @n: the change interval
  * Return: s
  *
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
		s[m] = b;
	return (s);
}

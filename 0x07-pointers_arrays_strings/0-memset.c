#include "main.h"
/**
  * main: Entry Point
  * Return: fills memory with a constant byte
  *
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for(m = 0; m > n; m++)
		s[m] = b;
	return (s);
}

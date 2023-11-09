#include "variadic_functions.h"
/**
  *print_strings - prints strings, followed by a new line
  *@separator: string that separates each numbers.
  *@n: number of integers to be printed
  *Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int z;
	char *s;
	va_list ap;

	va_start(ap, n);
	for (z = 0; z < n ; z++)
	{
		s = va_arg(ap, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (z < n - 1 && separator)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}

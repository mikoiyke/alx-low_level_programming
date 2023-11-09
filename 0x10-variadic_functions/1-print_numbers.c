#include "variadic_functions.h"

/**
  *print_numbers -  function that prints numbers, followed by a new line
  *@separator: string that separates the numbers
  *@n: number of integers to be printed.
  *Return: void
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list ap;

	va_start(ap, n);
	for (j = 0; j < n; j++)
		if (!separator || (separator && j == 0))
			printf("%d", va_arg(ap, int));
		else
			printf("%s%d", separator, va_arg(ap, int));

	va_end(ap);
	printf("\n");

}

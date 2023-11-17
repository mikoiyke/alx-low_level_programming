#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints the provided sentence before the main
 * function is executed before main
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");

}

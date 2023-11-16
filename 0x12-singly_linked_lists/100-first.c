#include <stdio.h>

void before_main_function(void) __attribute__((constructor));

void before_main_function(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

int main(void)
{
	/* Your main function code goes here */
	printf("Inside the main function.\n");

	return 0;
}


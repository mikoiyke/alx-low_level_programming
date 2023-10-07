#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * more headers goes there
 * main entry - Here
 * Return: Returns 0
 */
/* betty style doc function main goes there*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive/n");
	}
	else if (n == 0)
	{
		printf("is zero/n");
	}
	else
	{
		printf("is negative/n");
	}
	return (0);
}

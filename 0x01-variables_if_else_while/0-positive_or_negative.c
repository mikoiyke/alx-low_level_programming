#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there
 * main entry - Here
 * Return: returns 0
 */

/* betty style doc function main goes there*/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
		/* my code */
	if (n > 0)
		printf("is positive/n");
	if (n == 0)
		printf("is zero/n");
	if (n < 0)
		printf("is negative/n");
	return (0);
}

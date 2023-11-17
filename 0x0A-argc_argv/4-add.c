#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check for string there are digit
 * @str: array string
 * Return: Success
 */
int check_num(char *str)
{
	unsigned int counters;

	counters = 0;
	while (counters < strlen(str))
	{
		if (!isdigit(str[counters]))
		{
			return (0);
		}
		counters++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int counter;
	int str_to_int;
	int sum = 0;

	counter = 1;
	while (counter < argc)
	{
		if (check_num(argv[counter]))
		{
			str_to_int = atoi(argv[counter]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		counter++;
	}
	printf("%d\n", sum);
	return (0);
}

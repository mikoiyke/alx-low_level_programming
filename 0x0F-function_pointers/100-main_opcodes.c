#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always Success.
 */
int main(int argc, char *argv[])
{
	int x, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	x = atoi(argv[1]);

	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < x; i++)
	{
		if (i == x - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}

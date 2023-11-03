#include "main.h"
#include <stdlib.h>

/**
 * main - function that allocates memory for an array, using malloc
 *
 * @s1: first string
 * @s2: second string
 * @n: no of elements to concatenate
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
	len1++;
	
	while (s2 && s2[len2])
	len2++;

	s = (char *)malloc((len1 + n + 1) * sizeof(char));

	if (!s)
	return (NULL);

	while (i < len1)
	{
	s[i] = s1[i];
	i++;
	}

	while (n < len2 && i < (len1 + n))
	s[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
	s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}

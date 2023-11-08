#include "function_pointers.h"
/**
  * array_iterator - executes a function given as a parameter o
  * each element of an array
  * @array: array
  * @size: no of items to be printed
  * @action: pointer to print in regular or hex
  * Return: void
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array && action)
	{
		for (x = 0; x < size ; x++)
		{
		action(array[x]);
		}
	}
}

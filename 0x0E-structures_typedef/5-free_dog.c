#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_dog - frees memory to be allocated to struct dog
  * @d: struct dog to be free
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).owner);
		free((*d).name);
		free(d);
	}
}

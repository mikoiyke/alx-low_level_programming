#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *new_dog- creates new dog
  *@name: char for name
  *@age: float for age
  *@owner: char for owner
  *Return: dog_t
  */

dog_t *new_dog(char *name, float age, char *owner)
{
int l, ol, x;
dog_t *doginfo;

if (name == NULL && owner == NULL)
return (NULL);

doginfo = (dog_t *) malloc(sizeof(dog_t));

if (doginfo == NULL)
return (NULL);

for (l = 0; name[l] != '\0'; l++)
;
for (ol = 0; owner[ol] != '\0'; ol++)
;
(*doginfo).name = malloc((sizeof(char) * l) + 1);
if ((*doginfo).name == NULL)
{
	free((*doginfo).name);
	free(doginfo);
	return (NULL);
}
(*doginfo).owner = malloc((sizeof(char) * ol) + 1);

if ((*doginfo).owner == NULL)
{
	free((*doginfo).name);
	free((*doginfo).owner);
	free(doginfo);
	return (NULL);
}

for (x = 0; x <= l; x++)
(*doginfo).name[x] = name[x];

(*doginfo).age = age;
for (x = 0; x <= ol; x++)
(*doginfo).owner[x] = owner[x];

return (doginfo);
}

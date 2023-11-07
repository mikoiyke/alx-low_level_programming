#ifndef DOG_H
#define DOG_H
#define struct_dog
/**
  * struct dog - from the question
  * @name: name of the dog
  * @age: age of the dog
  * @owner: the owner of the dog
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

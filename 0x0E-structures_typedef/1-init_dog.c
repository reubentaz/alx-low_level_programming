#include "dog.h"
#include <stddef.h>

/**
  * init_dog - initializes a dog structure
  * @d: a dog structure
  * @name: the name of the dog
  * @age: the age of the dog
  * @owner: owner of the dog
  *
  * Return: Nothing
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

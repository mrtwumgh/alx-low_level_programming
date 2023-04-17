#include "dog.h"

/**
  * init_dog - initializes the struct dog
  * @d: pointer to the struct
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  *
  * Return: Void
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL || d == 0)
	{
		exit(1);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}

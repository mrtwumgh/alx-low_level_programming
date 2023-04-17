#include "dog.h"

/**
  * new_dog - creates a new dog
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  *
  * Return: Struct to the dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pd;

	pd = malloc(sizeof(dog_t));
	if (pd == NULL)
	{
		return (NULL);
	}

	pd->name = name;
	pd->age = age;
	pd->owner = owner;

	return (pd);
}

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

	pd->name = name;
	pd->age = age;
	pd->owner = owner;

	return (pd);
}

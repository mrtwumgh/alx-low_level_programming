#include "dog.h"

/**
  * free_dog - free the dogs :)
  * @d: pointer to the struct dog
  *
  * Return: Void
  */

void free_dog(dog_t *d)
{
	free(d);
}

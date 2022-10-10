#include "dog.h"
#include <stdlib.h>

/**
  * _strdup - returns a duplicate of a string
  *@str: a string parameter
  *
  *Return: returns a duplicate of string
  *
  */

char *_strdup(char *str)
{
	char *p;
	int size;
	int i;

	if (str == NULL)
		return (NULL);

	size = 0;
	for (i = 0; str[i] != '\0', i++)
		size++;

	p = malloc(sizeof(char) * (size + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		p[i] = str[i];

	p[size] = '\0';
	return (p);
}

/**
  * new_dog - creates a new dog
  *@name: name of the dog
  *@age: age of the dog
  *@owner: owner of the dog
  *
  *Return: the pointer to d
  *
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d_p;
	char *tempName;
	char *tempOwner;

	d_p = malloc(sizeof(dog));
	if (d_p == NULL)
		return (NULL);

	tempName = _strdup(name);
	if (tempName == NULL)
	{
		free(d_p);
		return (NULL);
	}
	(*d_p).name = tempName;
	(*d_p).age = age;

	tempOwner = _strdup(owner);
	if (tempOwner == NULL)
	{
		free((*d_p).name);
		free(d_p);
		return (NULL);
	}
	(*d_p).owner = tempOwner;

	return (d_p);
}

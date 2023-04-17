#include "dog.h"

/**
  * _strlen - gets the length of a string
  * @s: string to be processed
  *
  * Return: The length of the string
  */

int _strlen(char *s)
{
	int len = 0;

	if (s == NULL)
	{
		return (len);
	}

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
  * _strdup - creates a copy of a string
  * @s: string to be processed
  *
  * Return: pointer to the copy of the string
  */

char *_strdup(char *s)
{
	char *ps;
	int slen = 0;
	int i = 0;

	if (s == NULL)
	{
		return (NULL);
	}

	slen = _strlen(s);

	ps = (char *)malloc(sizeof(*ps) * (slen + 1));

	if (ps == NULL)
	{
		return (NULL);
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		ps[i] = s[i];
	}
	ps[i] = '\0';

	return (ps);
}

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
	char *tempname;
	char *tempowner;

	pd = malloc(sizeof(dog_t));

	if (pd == NULL)
	{
		return (NULL);
	}

	tempname = _strdup(name);
	if (tempname == NULL)
	{
		free(pd);
		return (NULL);
	}
	pd->name = tempname;
	pd->age = age;

	tempowner = _strdup(owner);
	if (tempowner == NULL)
	{
		free(pd->name);
		free(pd);
		return (NULL);
	}
	pd->owner = tempowner;

	return (pd);
}

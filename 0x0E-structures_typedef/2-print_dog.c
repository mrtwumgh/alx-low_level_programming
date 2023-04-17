#include "dog.h"

/**
  * print_dog - prints a struct dog
  * @d: pointer to the struct
  *
  * Return: Void
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		exit(1);
	}
	else if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else if (d->age == 0)
	{
		printf("Age: (nil)");
	}
	else if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}

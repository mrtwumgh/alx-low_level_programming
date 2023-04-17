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
		return;
	}
	else if (d->name == NULL)
	{
		printf("Name: (nil)\nAge: %f\nOwner: %s\n", d->age, d->owner);
	}
	else if (d->owner == NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: (nil)\n", d->name, d->age);
	}
	else
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}

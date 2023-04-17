#ifndef DOG_H_
#define DOG_H_

#include <stdio.h>
#include <stdlib.h>

/**
  * struct dog - describes a dog
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  *
  * Description: describes the name, age and owner of dog
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
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */

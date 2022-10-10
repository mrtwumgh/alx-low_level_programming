#ifndef DOG_H
#define DOG_H

/**
  * struct dog - defined data type dog
  * @name: defined element name
  * @age: defined element age
  * @owner: defined element owner
  *
  * Description: various elements that can be used to define a dog
  *
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
  * dog_t - typedef for struct dog
  * @name: defined element name
  * @age: defined element age
  * @owner: defined element owner
  *
  * Description: typedef for the type dog
  *
  */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */

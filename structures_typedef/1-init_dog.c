#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initializes a variable of type struct dog
 * @d: pointer to struct
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 * Return: NULL if d == NULLSS
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == (void *)0)
{
return ((void *)0);
}

d->name = name;
d->age = age;
d->owner = owner;

}

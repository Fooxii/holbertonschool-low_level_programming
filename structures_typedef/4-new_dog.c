#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 * Return: pointer to newdog or NULL if malloc fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newdog;
int lname = 0;
int lowner = 0;
int i;
if (name == (void *)0 || owner == (void *)0)
{
return ((void *)0);
}

while (name[lname])
lname++;
while (owner[lowner])
lowner++;

newdog = malloc(sizeof(dog_t));
if (newdog == (void *)0)
{
return ((void *)0);
}
newdog->name = malloc(lname + 1);
if (newdog->name == (void *)0)
{
free(newdog);
return ((void *)0);
}
newdog->owner = malloc(lowner + 1);
if (newdog->owner == (void *)0)
{
free(newdog->name);
free(newdog);
return ((void *)0);
}

for (i = 0; i <= lname; i++)
newdog->name[i] = name[i];
newdog->age = age;
for (i = 0; i <= lowner; i++)
newdog->owner[i] = owner[i];

return (newdog);
}

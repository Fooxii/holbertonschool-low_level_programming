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
char *cname, *cowner;
int lname, lowner;

if (name == (void *)0 || owner == (void *)0)
{
return ((void *)0);
}

for (lname = 0; name != '\0'; lname++)
{
name++;
}
for (lowner = 0; name != '\0'; lowner++)
{
owner++;
}

newdog = malloc(sizeof(dog_t));
if (newdog == (void *)0)
{
return ((void *)0);
}
newdog->name = malloc(lname + 1);
if (newdog->name == (void *)0)
{
return ((void *)0);
}
newdog->owner = malloc(lowner + 1);
if (newdog->owner == (void *)0)
{
return ((void *)0);
}

return (newdog);
}

#include "main.h"

/**
 * _strcpy - function copies string from src over to dest including '\0'
 * @src: string being copied
 * @dest: pointer to destination of copied string
 * @return - returns pointer dest
 */

char *_strcpy(char *dest, char *src)
{
char *temp = dest;
while (*src != '\0')
{
*temp = *src;
temp++;
src++;
}
*temp = '\0';

return (dest);
}

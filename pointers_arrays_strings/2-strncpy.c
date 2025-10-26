#include "main.h"

/**
 * _strncpy - function copies string from src to dest
 * @dest: pointer to destination of copied string
 * @src: pointer to string to be copied
 * @n: number of char to be copied
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
char *copy = dest;
while (*src != '\0' && n > 0)
{
*copy = *src;
src++;
copy++;
n--;
}

if (n > 0)
{
*copy = '\0';
copy++;
n--;
}

return(dest);

}

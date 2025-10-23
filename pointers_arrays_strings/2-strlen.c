#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
int length;
length = strlen(s);
_putchar(length + '0');
_putchar ('\n');
}

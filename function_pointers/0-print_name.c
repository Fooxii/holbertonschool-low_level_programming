#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function that prints a name
 * @name: name being printed
 * @f: function pointer
 * Return: will return if name or f is == NULL
 */

void print_name(char *name, void (*f)(char *))
{
if (name == (void *)0 || f == (void *)0)
{
return;
}

f(name);
}

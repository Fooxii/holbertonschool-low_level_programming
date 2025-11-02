#include "main.h"

/**
 * main - function that prints its name
 * @argv: array of command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
char *name = argv[0];
(void)argc;
while (*name != '\0')
{
_putchar(*name);
name++;
}
return (0);
}

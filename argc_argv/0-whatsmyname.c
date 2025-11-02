#include "main.h"

/**
 * main - function that prints its name
 * @argv: array of command line arguments
 * Return: name of program
 */

int main(char *argv[])
{
char *name = argv[0];

while (*name != '\0')
{
_putchar(*name);
name++;
}
}

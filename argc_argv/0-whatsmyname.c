#include "main.h"

/**
 * main - function that prints its name
 * @argc: command line argument count
 * @argv: array of command line arguments
 * Return: name of program
 */

int main(int argc, char *argv[])
{
int n;
for (n = 0; n < argc; n++)
{
_putchar(argv[n]);
}
_putchar('\n');
}

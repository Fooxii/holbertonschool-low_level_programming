#include "main.h"

/**
 * main - function that prints all arguments received
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
int count = argc;
int i = 0;

while (count != 0)
{
while (argv[i] != '\0')
{
_putchar(argv);
argv++;
}
i++;
count--;
_putchar('\n');
}
return (0);
}

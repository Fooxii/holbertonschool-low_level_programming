#include "main.h"

/**
 * main - prints all arguments received, one per line
 * @argc: argument count (not used)
 * @argv: array of argument strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
char **arg = argv;

(void)argc;

while (*arg)
{
char *c = *arg;

while (*c)
_putchar(*c++);

_putchar('\n');
arg++;
}

return (0);
}

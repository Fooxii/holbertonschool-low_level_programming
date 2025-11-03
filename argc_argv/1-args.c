#include "main.h"
#include <stdio.h>

/**
 * main - function that prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: void
 * Return: 0
 */

int main(int argc, char *argv[])
{
printf("%d", argc - 1);
(void)argv;
_putchar('\n');
return (0);
}

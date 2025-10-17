#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

char letter;
char LETTER;

for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
for (LETTER = 'A'; LETTER <= 'Z'; LETTER++)
putchar(LETTER);
putchar('\n');

return (0);
}

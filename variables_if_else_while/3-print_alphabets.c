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
putchar('\n');
for (LETTER = 'A'; LETTER <= 'Z'; LETTER++)
putchar(LETTER);

return (0);
}

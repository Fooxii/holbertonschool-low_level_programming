#include "main.h"



void print_rev(char *s)
{

int len = 0;
int length;

while (*s != '\0')
{
len++;
s++;
}

s--;

for (length = len; length >= 0; length--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}

#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to be printed
 */

void rev_string(char *s)
{
int start = 0;
int end = 0;
int temp;

while (*s != '\0')
{
s++;
}

end = *s - 1;

while (start < end)
{

temp = start;
start = end;
end = temp;

start++;
end++;

}

}

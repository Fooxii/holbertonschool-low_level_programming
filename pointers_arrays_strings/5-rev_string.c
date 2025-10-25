#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to be printed
 */

void rev_string(char *s)
{
char *start = s;
char *end = s;
int temp;

while (*end != '\0')
{
end++;
}

end--;

while (start < end)
{

temp = *start;
*start = *end;
*end = temp;

start++;
end--;

}

}

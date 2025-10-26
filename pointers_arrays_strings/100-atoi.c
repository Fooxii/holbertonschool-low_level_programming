#include "main.h"

/**
 * _atoi - converts string to an interger
 * @s: string to be converted
 * Return: the integer found in the string or 0 if no numbers are present
 */
int _atoi(char *s)
{
int sign = 1;
int num = 0;
int found = 0;

while (*s)
{
if (*s == '-')
sign *= -1;
else if (*s == '+')
;
else if (*s >= '0' && *s <= '9')
{
if (sign == 1)
num = num*10 + (*s - '0');
 else
num = num*10 - (*s - '0');  /* subtract for negative numbers */
found = 1;
}
else if (found)
{
break;


s++;
}
}
return (num *sign);
}

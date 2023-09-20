#include "main.h"

/**
* _strcomp - Compares two strings.
* @s1: Pointer to the first string.
* @s2: Pointer to the second string.
*
* Return: 0 if they match , the differnce otherwise
*/

int _strcomp(char *s1, char *s2)
{
int checker;

while (*s1 != '\0' && *s2 != '\0')
{
checker = *s1 - *s2;
if (checker != 0)
{
return (checker);
}
else
{
s1++;
s2++;
}
}


if (*s1 == '\0' && *s2 == '\0')
{
return (0);
}
else if (*s1 == '\0')
{
return (-1);
}
else
{
return (1);
}
}

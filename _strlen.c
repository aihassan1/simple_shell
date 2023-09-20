#include "main.h"

/**
* _strlen - Calculates the String lengths.
* @str: The input string.
*
* Return: the length of the string ... an int
*/
int _strlen(char *str)
{
int _length = 0;

if (str == NULL)
{
return (0);
}

while (str[_length] != '\0')
{
_length++;
}

return (_length);
}

#include "main.h"

/**
* _stringspan - Calculates the length until finding chars from
* `stop_string`.
* @string: The input string.
* @stop_string: The set of characters to search for in `string`.
*
* Return: The length of the initial substring not containing any characters
* from `stop_string`.
*/
size_t _stringspan(const char *string, const char *stop_string)
{
const char *s1 = string;
const char *s2;
size_t counter = 0;

while (*s1 != '\0')
{
s2 = stop_string;

while (*s2 != '\0')
{
if (*s1 == *s2)
return (counter);
++s2;
}

++s1;
++counter;
}
return (counter);
}

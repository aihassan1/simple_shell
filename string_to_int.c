#include "main.h"

/**
* string_to_int - converts a string to an integer
*  if it doesn't contain chars
* @str: the string to be converted
*
* Return: the converted integer
*         -1 if the string contains non-numeric characters
*          0 if the string contains NULL or '\0'
*/
int string_to_int(char *str)
{
int i = 0;
int output_int = 0;

if (str == NULL || str[0] == '\0')
{
return (0);
}

while (str[i] != '\0')
{
if (str[i] >= '0' && str[i] <= '9')
{
output_int = output_int * 10 + (str[i] - '0');
i++;
}
else
{
return (0);
}
}

return (output_int);
}

#include "main.h"

/**
* _strduplicate - Duplicates a string
* @str: The string to be duplicated
*
* Return: A Pointer to the duplicated string,  NULL if memory allocation fails.
*/
char *_strduplicate(char *str)
{
int i;
int size;
char *duplicated_str;

if (str == NULL)
{
return (NULL);
}

size = _strlen(str) + 1;
duplicated_str = malloc(size);

if (duplicated_str == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
duplicated_str[i] = str[i];
}

return (duplicated_str);
}

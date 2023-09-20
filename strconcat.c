#include "main.h"

/**
* str_concat - Concatenates two strings.
* @s1: first string.
* @s2: second string.
*
* Return: Pointer to the concatenated string, NULL on failure.
*/

char *str_concat(char *s1, char *s2)
{
int i;
int j;
char *s3;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

s3 = malloc(_strlen(s1) + _strlen(s2) + 1);

if (s3 == NULL)
{
return (NULL);
}

for (i = 0; i < _strlen(s1); i++)
{
s3[i] = s1[i];
}

for (j = 0; j < _strlen(s2); i++, j++)
{
s3[i] = s2[j];
}

s3[i] = '\0';
return (s3);
}
